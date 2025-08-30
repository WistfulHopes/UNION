#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SoundHandle.h"
#include "RaceUISubAiming.generated.h"

class UCanvasPanelSlot;
class UImage;
class UMaterialInstanceDynamic;
class UOverlay;
class UUnionRaceUI;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubAiming : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUI* RaceHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AimingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LockOnImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WaitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LockOnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LostAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShotAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CanvasSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle AimingUseBeforeSoundHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AimingMID;
    
public:
    URaceUISubAiming();

    UFUNCTION(BlueprintCallable)
    void StopSound(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceHUD(UUnionRaceUI* inRaceHud, int32 localPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void ReStartAimingUseBeforeSound(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitParam();
    
};

