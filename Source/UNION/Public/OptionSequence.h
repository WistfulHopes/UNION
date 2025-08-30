#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "EOptionSequenceMainState.h"
#include "MenuSequenceUIInterface.h"
#include "OptionSequence.generated.h"

class UUnionUISceneBase;

UCLASS(Blueprintable)
class UNION_API AOptionSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
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
    EOptionSequenceMainState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionSequenceMainState SelectedMainState;
    
public:
    AOptionSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextOptionSequenceState(EOptionSequenceMainState InState, EOptionSequenceMainState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelectMainOption();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateOptionTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    

    // Fix for true pure virtual functions not being implemented
};

