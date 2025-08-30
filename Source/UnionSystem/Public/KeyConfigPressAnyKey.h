#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "KeyConfigPressAnyKey.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API UKeyConfigPressAnyKey : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewKeyAssigned, const FKey&, NewKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKeyPressCancel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewKeyAssigned OnNewKeyAssigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyPressCancel OnKeyAssignCancel;
    
    UKeyConfigPressAnyKey();

protected:
    UFUNCTION(BlueprintCallable)
    void SetIsGamepadKey(const bool bInIsGamepadKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCurrentKey() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable)
    void AssignKey(const FKey& NewKey);
    
};

