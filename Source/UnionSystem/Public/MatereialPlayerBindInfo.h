#pragma once
#include "CoreMinimal.h"
#include "MatereialPlayerBindInfo.generated.h"

class UCurveTable;
class UMaterial;
class UMeshComponent;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FMatereialPlayerBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterial>> TargetMaterials;
    
    FMatereialPlayerBindInfo();
};

