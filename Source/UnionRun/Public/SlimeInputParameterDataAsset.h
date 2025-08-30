#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SlimeInputParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API USlimeInputParameterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatusShortenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyInputInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IngoreThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IngoreAngleThreshold;
    
    USlimeInputParameterDataAsset();

};

