#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "EGameSettingsSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "GameSettingsSequence.generated.h"

class UGameSettingsScene;

UCLASS(Blueprintable)
class UNION_API AGameSettingsSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameSettingsScene> UISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameSettingsScene* UIScene;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameSettingsSequenceState PrevSequenceState;
    
public:
    AGameSettingsSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextGameSettingsSequenceState(EGameSettingsSequenceState InState, EGameSettingsSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateInputAssignSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateGraphicsSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateGameSettingsTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateGameGeneralSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameSettingsSequenceState GetCurrentGameSettingsState();
    

    // Fix for true pure virtual functions not being implemented
};

