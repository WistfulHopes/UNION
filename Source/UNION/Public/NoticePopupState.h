#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FestaCheckFestaRewardRequest.h"
#include "ELobbySequenceState.h"
#include "EOnlineSequenceState.h"
#include "ETopMenuSequenceState.h"
#include "MenuSequenceSubStateBase.h"
#include "NoticePopupState.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UNoticePopupState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewEmergencyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DLCScheduleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DLCBGTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DLCStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewFesta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FestaEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FestaTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FestaBGTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FestaEventStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FestaEventEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewCollaboInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CollaboTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CollaboScheduleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CollaboBGTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CollaboStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewRegendCompeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LegendCompeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LegendCompeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LegendCompeBGTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LegendCompeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LegendCompeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewWorldMatchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsViewBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState LobbyReturnState;
    
public:
    UNoticePopupState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTopMenuReturnState(ETopMenuSequenceState ReturnState);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineReturnState(EOnlineSequenceState ReturnState);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyReturnState(ELobbySequenceState ReturnState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendCheckFestaRewardRequest(FFestaCheckFestaRewardRequest Request);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveCheckFestaReward(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQueryReadPlatformFriend(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReturnStatePreNotice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsExistWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceReleaseWidget();
    
};

