#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "EmoteWheelState.generated.h"

class AMenuRacerBase;
class UCanvasPanel;
class UUnionUISceneBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UEmoteWheelState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedStampDelegate, int32, StampIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedWaitTimerDelegate, bool, IsWaiting);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedStampDelegate OnSelectedStamp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedWaitTimerDelegate OnChangedWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSendStamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSendLimitTimerStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRecevStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSquadLobby;
    
public:
    UEmoteWheelState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnerMenuRacer(AMenuRacerBase* InOwnerRacer, int32 InOwnerLobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSquadLobby(bool bInIsSquadlobby);
    
    UFUNCTION(BlueprintCallable)
    void SetCanSendStamp(bool bInCanSendStamp);
    
    UFUNCTION(BlueprintCallable)
    void SetCanRecevStamp(bool bInCanRecevStamp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEmoteAndStamp(AMenuRacerBase* InRacer, int32 InButtonIndex, int32 InLobbyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(UCanvasPanel* InCanvasPanel, UUnionUISceneBase* InBaseScene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanSendStamp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EmoteWheelTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllStampForcePlayOutAnim();
    
};

