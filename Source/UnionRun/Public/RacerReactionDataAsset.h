#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RacerReactionRecord.h"
#include "RacerReactionDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONRUN_API URacerReactionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerReactionRecord Data;
    
    URacerReactionDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

