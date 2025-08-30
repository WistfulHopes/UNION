#pragma once
#include "CoreMinimal.h"
#include "CharaSelectResource.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct UNION_API FCharaSelectResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SteeringWheelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimClass;
    
    FCharaSelectResource();
};

