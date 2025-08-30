#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnlineTimer.generated.h"

class USoundAtomCue;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOnlineTimer : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnlineTimerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineTimerDelegate OnTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlertTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ChangeCountSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* TimeOutSoundCue;
    
public:
    UOnlineTimer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTimeCount(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeCount(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStartTimeCount(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetStartTimeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AlreadyTimeOut();
    
};

