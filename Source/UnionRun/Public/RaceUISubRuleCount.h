#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuGroupRaceBonusData.h"
#include "RaceUISubRuleCount.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubRuleCount : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TxtCount;
    
    URaceUISubRuleCount();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRuleCountImpl(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewCount(int32 NewCuont);
    
    UFUNCTION(BlueprintCallable)
    FMenuGroupRaceBonusData GetGroupRaceBonusData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCount(int32 RacerIndex);
    
};

