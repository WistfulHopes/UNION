#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RacerReactionText.h"
#include "RacerReactionTextDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API URacerReactionTextDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionText> TextList;
    
    URacerReactionTextDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

