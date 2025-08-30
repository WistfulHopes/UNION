#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputConfig.h"
#include "InputDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UInputDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInputConfig> InputConfigs;
    
public:
    UInputDataAsset();

};

