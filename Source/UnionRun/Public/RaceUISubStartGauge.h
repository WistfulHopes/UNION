#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "RaceInputRecieveInterface.h"
#include "UnionRaceStartDashParam.h"
#include "RaceUISubStartGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UObject;
class UOverlay;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubStartGauge : public UUserWidget, public IRaceInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Arrow_MovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MainGaurgeMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AngleParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ButtonSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGaugeJustAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JudgeAreaJustAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeRateMax;
    
    URaceUISubStartGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStartDashSetting(const float& LV3_PIVOT, const float& LV3_RANGE, const float& LV2_PIVOT, const float& LV2_RANGE, const float& NG1_PIVOT, const float& NG1_RANGE, const float& NG2_PIVOT, const float& NG2_RANGE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStartDashParamSetting(const FUnionRaceStartDashParam& InStartDashParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugePivotAndRange(UImage* ImageRef, float PivotRate, float GaugeRateRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeParcentTrigger(float GaugeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeParcent(float GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDashInputKey(const FKey& Key, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayControlKeyboard(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FKey GetKeyAccel(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* GetButtonWidget();
    

    // Fix for true pure virtual functions not being implemented
};

