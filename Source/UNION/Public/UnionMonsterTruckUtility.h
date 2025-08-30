#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionMonsterTruckUtility.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API UUnionMonsterTruckUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionMonsterTruckUtility();

    UFUNCTION(BlueprintCallable)
    static void AssignLOD0MaterialToMinLODStaticMeshBySlotName(UStaticMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void AssignLOD0MaterialToMinLODStaticMesh(UStaticMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void AssignLOD0MaterialToMinLODSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent);
    
};

