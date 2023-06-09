// Fill out your copyright notice in the Description page of Project Settings.

#include "SBarrel.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SHealthComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASBarrel::ASBarrel()
{
	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASBarrel::OnHealthChanged);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = MeshComp;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(MeshComp);
	RadialForceComp->Radius = 250;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false;
	RadialForceComp->bIgnoreOwningActor = true;

	ExplosionImpulse = 400;

	SetReplicates(true);
	SetReplicateMovement(true);
}

void ASBarrel::OnHealthChanged(USHealthComponent* OwningHealthComp, float Health, float HealthDelta, const class UDamageType* DamageType, 
	class AController* InstigatedBy, AActor* DamageCauser)
{
		if (bExploded)
		{
			return;
		}

		if (Health <= 0.0f)
		{
			bExploded = true;
			OnReq_Exploded();

			FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;
			MeshComp->AddImpulse(BoostIntensity, NAME_None, true);

			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
			MeshComp->SetMaterial(0, ExplodedMaterial);

			RadialForceComp->FireImpulse();
		}
}

void ASBarrel::OnReq_Exploded()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	MeshComp->SetMaterial(0, ExplodedMaterial);
}

void ASBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASBarrel, bExploded);
}