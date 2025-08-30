#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EGroupRaceRule.h"
#include "UnionUISceneBase.h"
#include "CommonMenuRuleTimeTableScene.generated.h"

class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuRuleTimeTableScene : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FDateTime> Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<EGroupRaceRule> GroupRaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> IsSpRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* TimeTableOverlay;
    
public:
    UCommonMenuRuleTimeTableScene();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityRankCalcWidget(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityOpenWidget(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityButtonIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeTable(int32 InTimetableIndex, FDateTime InTime, EGroupRaceRule InGroupRaceRule, bool InIsEnd, bool InIsSpRule);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FixedRule(EGroupRaceRule InFixedRule);
    
};

