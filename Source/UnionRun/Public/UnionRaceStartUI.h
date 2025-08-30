#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceInputRecieveInterface.h"
#include "UnionRaceStartDashParam.h"
#include "UnionRaceStartUI.generated.h"

class UObject;
class URaceUISubStartGauge;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceStartUI : public UUserWidget, public IRaceInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceUISubStartGauge* WBP_Race_StartDash_Sub_ArcGauge;
    
    UUnionRaceStartUI();

    UFUNCTION(BlueprintCallable)
    void SetStartDashSetting(const float& LV3_PIVOT, const float& LV3_RANGE, const float& LV2_PIVOT, const float& LV2_RANGE, const float& NG1_PIVOT, const float& NG1_RANGE, const float& NG2_PIVOT, const float& NG2_RANGE);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDashParamSetting(const FUnionRaceStartDashParam& InStartDashParam);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeParcent(const float& GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetButtonWidget();
    

    // Fix for true pure virtual functions not being implemented
};

