#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EBootSequenceState.h"
#include "BootSequence.generated.h"

class UUnionPlatformSignInBase;

UCLASS(Blueprintable)
class UNION_API ABootSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionPlatformSignInBase* PlatformSignIn;
    
public:
    ABootSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextBootSequenceState(EBootSequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSignInPlatform(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateInitializePlatform(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckPSParentalControl(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckGDKCrossPlay(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateCheckContent(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSignInPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateInitializePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckPSParentalControl();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckGDKCrossPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateCheckContent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSignInPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateInitializePlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckPSParentalControl();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckGDKCrossPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateCheckContent();
    
};

