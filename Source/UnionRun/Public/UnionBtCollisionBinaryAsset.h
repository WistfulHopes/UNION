#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionBtCollisionBinaryParameter.h"
#include "UnionBtCollisionBinaryAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionBtCollisionBinaryAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionBtCollisionBinaryParameter Parameter;
    
    UUnionBtCollisionBinaryAsset();

};

