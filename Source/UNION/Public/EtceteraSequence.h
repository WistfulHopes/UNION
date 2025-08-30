#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "EEtceteraSequenceMainState.h"
#include "MenuSequenceUIInterface.h"
#include "EtceteraSequence.generated.h"

class ADLCStoreDialogActor;
class AFullGameStoreDialogActor;
class UUnionUISceneBase;

UCLASS(Blueprintable)
class UNION_API AEtceteraSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUnionUISceneBase> UISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* UIScene;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEtceteraSequenceMainState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEtceteraSequenceMainState SelectedMainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCStoreDialogActor* PlatformStorePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFullGameStoreDialogActor* FullGameStorePopup;
    
public:
    AEtceteraSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextEtceteraSequenceState(EEtceteraSequenceMainState InState, EEtceteraSequenceMainState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectMainEtcetera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateFullGameStore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateEtceteraTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateDLC();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecisionFullGameStoreEvent(bool IsAccept);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompletePlatformStoreEvent(bool IsAccept);
    

    // Fix for true pure virtual functions not being implemented
};

