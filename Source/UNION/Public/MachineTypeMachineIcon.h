#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMachineId.h"
#include "MachineTypeMachineIcon.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineTypeMachineIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_3DMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_CutomText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_Custom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TXT_NEW;
    
public:
    UMachineTypeMachineIcon();

    UFUNCTION(BlueprintCallable)
    void SetupText(int32 InIndex, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureScaleWithYTransrate(float InScaleRate, float InY);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureScale(float InScaleRate);
    
    UFUNCTION(BlueprintCallable)
    void SetTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetNewVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetNewText(FText IsText);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineID(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIconCustomVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineId GetMachineId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndex() const;
    
};

