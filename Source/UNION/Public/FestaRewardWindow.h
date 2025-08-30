#pragma once
#include "CoreMinimal.h"
#include "FestaPointRewardUIData.h"
#include "MenuInputRecieveInterface.h"
#include "UnionUISceneBase.h"
#include "FestaRewardWindow.generated.h"

class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFestaRewardWindow : public UUnionUISceneBase, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseEndDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEventInfoDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseEndDelegate CloseEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWindowInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> PointRewardItemButtonArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFestaPointRewardUIData> PointRewardUIDataArray;
    
public:
    UFestaRewardWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPointRewardItemButton(int32 RewardItemButtonIndex, int32 DataIndex, int32 PlayerFestaPoint);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupEventInfoPointReward(int32 SelectDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEventInfoDisplayData(const TArray<FFestaPointRewardUIData>& InRewardUIDataArray);
    
    UFUNCTION(BlueprintCallable)
    void SetDecisionClose(bool bInDecisionClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPointReward(int32 SelectDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectEventInfoPointReward(int32 SelectDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDecisionClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    

    // Fix for true pure virtual functions not being implemented
};

