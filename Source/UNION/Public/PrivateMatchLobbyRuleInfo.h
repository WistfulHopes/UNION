#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PrivateMatchLobbyRuleInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPrivateMatchLobbyRuleInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPrivateMatchLobbyRuleInfo();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibleButton(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeaderText(bool bIsRuleChange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RuleUpdate(bool bIsRivalChallenge);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitialRuleInfo(bool bIsHost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Finalize();
    
};

