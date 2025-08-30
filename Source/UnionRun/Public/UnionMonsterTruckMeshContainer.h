#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionMonsterTruckMeshContainer.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class UNIONRUN_API AUnionMonsterTruckMeshContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BodyStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> CockpitMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> UnitCarStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> UnitBoatStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> UnitPlaneSkeletalMeshComponents;
    
    AUnionMonsterTruckMeshContainer(const FObjectInitializer& ObjectInitializer);

};

