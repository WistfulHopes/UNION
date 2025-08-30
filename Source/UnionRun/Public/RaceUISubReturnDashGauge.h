#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "RaceInputRecieveInterface.h"
#include "RaceUISubReturnDashGauge.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UObject;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubReturnDashGauge : public UUserWidget, public IRaceInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Arrow_MovePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MainGaugeMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AngleParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerGaugeJustAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JudgeAreaJustAngle;
    
    URaceUISubReturnDashGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReturnDashSetting(const float& Pivot, const float& Range);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugePivotAndRange(UImage* ImageRef, float PivotRate, float GaugeRateRange);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeParcent(float GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDashInputKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* GetButtonWidget();
    

    // Fix for true pure virtual functions not being implemented
};

