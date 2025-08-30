#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "MachineOptionWindow.generated.h"

class UUnionUIButtonBase;
class UUnionUIButtonsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineOptionWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionWindowEvent, bool, IsIn);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionWindowEvent OnFinishedAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* WBP_Window_Sub_Option_HandleAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* WBP_Window_Sub_Option_AutoAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* WBP_Window_Sub_Option_AerialTrickAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonPanel;
    
public:
    UMachineOptionWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAssistHandle(bool IsFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAssistAutoAccel(bool IsFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAssistAerialTrick(bool IsFlag);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayAnimLoop();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySEAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable)
    void OnCallbackChangeAssistHandle(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnCallbackChangeAssistAutoAccel(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnCallbackChangeAssistAerialTrick(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonBase* GetHandleAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonBase* GetAutoAccel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonBase* GetAerialTrickAssist() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishedAnim();
    
};

