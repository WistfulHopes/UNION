#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubBoost.generated.h"

class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubBoost : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Level0InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IrregularInLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* JustinOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoostNumInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> DspBoostArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DspPatBoostNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EffIregularImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IrregularChargeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FastFirstChargeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FastSecondChargeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FastThirdChargeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFastFirstGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFastSecondGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFastThirdGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartVisibleNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInFever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpened;
    
    URaceUISubBoost();

    UFUNCTION(BlueprintCallable)
    void UpdateChargeInfo(int32 ChargeLevel, float ChargeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitTimeJustBoostInGhostReplay(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleHUD(bool IsVisible, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsViewGhostReplay();
    
    UFUNCTION(BlueprintCallable)
    bool IsFastThirdCharge(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsFastSecondCharge(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsFastFirstCharge(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckBoostLevelInGhostReplay(int32 Level);
    
};

