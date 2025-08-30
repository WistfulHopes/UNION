#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGadgetId.h"
#include "ECharaMachineParamWindowBlinkMode.h"
#include "RacerParamData.h"
#include "CharaMachineParamWindow.generated.h"

class UCharaMachineParamWindowBar;

UCLASS(Blueprintable, EditInlineNew)
class UCharaMachineParamWindow : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FParamWindowEvent, bool, IsIn);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindowBar* WBP_Window_Sub_Parameter_TopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindowBar* WBP_Window_Sub_Parameter_Accel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindowBar* WBP_Window_Sub_Parameter_Dash_BOOST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindowBar* WBP_Window_Sub_Parameter_Handling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineParamWindowBar* WBP_Window_Sub_Parameter_Power;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParamWindowEvent OnFinishedAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMinParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxParam;
    
public:
    UCharaMachineParamWindow();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SwitchPlayAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetParamRange(float InMinParam, float InMaxParam);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetIds(const TArray<EGadgetId>& InGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    void SetDiffVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentParamData(const FRacerParamData& InCurrentParamData);
    
    UFUNCTION(BlueprintCallable)
    void SetCorrectionVal(float InCorrectionVal);
    
    UFUNCTION(BlueprintCallable)
    void SetCandParamData(const FRacerParamData& InCandParamData);
    
    UFUNCTION(BlueprintCallable)
    void SetBlinkMode(ECharaMachineParamWindowBlinkMode InBlinkMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayAnimLoop();
    
public:
    UFUNCTION(BlueprintCallable)
    bool PlayAnim(bool IsInAnim);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EGadgetId> GetGadgetIds() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishedAnim();
    
};

