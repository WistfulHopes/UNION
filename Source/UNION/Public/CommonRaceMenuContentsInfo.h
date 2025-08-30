#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameModeId.h"
#include "CommonRaceMenuContentRow.h"
#include "CommonRaceMenuContentsInfo.generated.h"

UCLASS(Blueprintable)
class UNION_API UCommonRaceMenuContentsInfo : public UObject {
    GENERATED_BODY()
public:
    UCommonRaceMenuContentsInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameModeId GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCommonRaceMenuContentRow> GetContents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCommonRaceMenuContentRow GetContent(int32 InIndex, bool& bOutSuccess) const;
    
};

