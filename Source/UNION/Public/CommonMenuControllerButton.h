#pragma once
#include "CoreMinimal.h"
#include "DeviceChangeInterface.h"
#include "EAppControllerInputType.h"
#include "UnionUIButtonBase.h"
#include "CommonMenuControllerButton.generated.h"

class UImage;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMenuControllerButton : public UUnionUIButtonBase, public IDeviceChangeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamePadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PAT_ControllerBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
public:
    UCommonMenuControllerButton();

    UFUNCTION(BlueprintCallable)
    void ToMouseRowsColumns();
    
    UFUNCTION(BlueprintCallable)
    void ToMenuKeyboardRowsColumns();
    
    UFUNCTION(BlueprintCallable)
    void ToMenuKeyboardDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ToMenuGamepadRowsColumns();
    
    UFUNCTION(BlueprintCallable)
    void SetControllerTexture(UTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerButtonMaterialParam(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshButton();
    
    UFUNCTION(BlueprintCallable)
    void ChangeKeyboardLayoutIF_Implementation(uint8 InNewKeyboardLayout, uint8 InNewKeytopPattern);
    
    UFUNCTION(BlueprintCallable)
    void ChangeInputTypeIF_Implementation(EAppControllerInputType InNewControllerInputType);
    

    // Fix for true pure virtual functions not being implemented
};

