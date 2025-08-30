#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMachineCustomizeTabID.h"
#include "MachineCustomizeTabParameter.h"
#include "MachineCustomTab.generated.h"

class UHorizontalBox;
class UMenuInputRecieveObject;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UMachineCustomTab : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventMachineCustomTabChange, EMachineCustomizeTabID, InTabID);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TabList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventMachineCustomTabChange OnEventTabChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineCustomizeTabParameter> Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UMachineCustomTab();

    UFUNCTION(BlueprintCallable)
    void SetNewIconAll(const TArray<bool>& InNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIcon(int32 InIndex, bool InNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAll(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(int32 InIndex, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void RegistInputReceiver();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySE();
    
    UFUNCTION(BlueprintCallable)
    void OnTabPressed(EMachineCustomizeTabID InTabID);
    
    UFUNCTION(BlueprintCallable)
    void OnRShoulderPressed(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnLShoulderPressed(UObject* Object);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeregistInputReceiver();
    
};

