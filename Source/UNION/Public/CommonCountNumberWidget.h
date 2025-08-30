#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERewardType.h"
#include "CommonCountNumberWidget.generated.h"

class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonCountNumberWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCountEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountEndDelegate CountEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNumber;
    
    UCommonCountNumberWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNumberDisplay(int32 InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindAllEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAnimationCount();
    
    UFUNCTION(BlueprintCallable)
    void StartCount();
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InStartNumber, int32 InEndNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconType(ERewardType InRewardType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconTexture(const UTexture2D* InIconTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetEndWait(float InEndWait);
    
    UFUNCTION(BlueprintCallable)
    void SetCountWaitByMaxEndTime(float InMaxEndTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCountWait(float InCountWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidgetAnimation* GetAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidgetAnimation* GetAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidgetAnimation* GetAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidgetAnimation* GetAnimationCount();
    
    UFUNCTION(BlueprintCallable)
    void EndCount();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCountStart();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCountEnd();
    
};

