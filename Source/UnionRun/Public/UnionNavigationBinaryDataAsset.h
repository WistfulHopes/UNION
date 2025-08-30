#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionNavigationBinaryParameter.h"
#include "UnionNavigationBinaryDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionNavigationBinaryDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionNavigationBinaryParameter Parameter;
    
    UUnionNavigationBinaryDataAsset();

};

