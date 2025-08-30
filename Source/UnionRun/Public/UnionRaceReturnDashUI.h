#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceInputRecieveInterface.h"
#include "UnionRaceReturnDashUI.generated.h"

class UObject;
class URaceUISubReturnDashGauge;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceReturnDashUI : public UUserWidget, public IRaceInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URaceUISubReturnDashGauge* WBP_Race_ReturnDash_Sub_ArcGauge;
    
    UUnionRaceReturnDashUI();

    UFUNCTION(BlueprintCallable)
    void SetReturnDashSetting(const float& Pivot, const float& Range);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeParcent(const float& GaugeRate);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetButtonWidget();
    

    // Fix for true pure virtual functions not being implemented
};

