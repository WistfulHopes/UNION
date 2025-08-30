#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RacerReactionInfo.h"
#include "RacerReactionInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API URacerReactionInfoDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionInfo> InfoList;
    
    URacerReactionInfoDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

