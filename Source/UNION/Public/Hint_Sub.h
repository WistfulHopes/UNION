#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHintId.h"
#include "PFControllerTypeUseHint.h"
#include "Hint_Sub.generated.h"

class UCommonUIControllerWrapper;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHint_Sub : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonUIControllerWrapper* WBP_Tutorial_Controller_Wrapper;
    
public:
    UHint_Sub();

    UFUNCTION(BlueprintCallable)
    void SetupControllerUI(EHintId InHintId, bool bIsKeyboard);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerUIIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidControllerUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    PFControllerTypeUseHint GetPlatformControllerType() const;
    
};

