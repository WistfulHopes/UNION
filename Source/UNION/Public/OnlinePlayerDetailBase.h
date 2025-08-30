#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EBlockPlayerState.h"
#include "UnionUIButtonBase.h"
#include "EMatchingLobbyType.h"
#include "EPlayerInfoSubWindowBtnType.h"
#include "LobbyPlayerData.h"
#include "OnlinePlayerDetailBase.generated.h"

class UOnlineBlockWindow;
class UOverlay;
class UPlayerDetail;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlinePlayerDetailBase : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerProfilePressedNice);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfilePressedNextPlayerDelegate, bool, bIsLeftInput);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerProfilePressedBack);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerProfileOutAnimEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDecideSubWindowPopUpEvent, EPlayerInfoSubWindowBtnType, InBtnType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDecideReportUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDecideKickUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDecideFriendRequestUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDecideBlockUser);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSendNice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoveLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNPCProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineBlockWindow* BlockWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAloneProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerDetail* CMN_PlayerDetailScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverRomVer10100;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfilePressedBack OnPressedBack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfilePressedNice OnPressedNice;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfileOutAnimEnd OnOutAnimEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfilePressedNextPlayerDelegate OnPressedNextPlayer;
    
    UOnlinePlayerDetailBase();

    UFUNCTION(BlueprintCallable)
    void SetVisibleArrows(ESlateVisibility InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerDetailData(FLobbyPlayerData InPlayerData, EBlockPlayerState InBlockType, bool bInIsOwn, bool bInIsSendNice, bool bInIsNPC, int32 InNiceCount, const FString& InProductUserId, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, const FString& InPlatformId, const FString& InPlatform, bool bInIsEnableBlockWindowButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateNiceCount(int32 InNiceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerProfileFocusEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayDetailOutAnimEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayDetailInAnimEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnInitialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecideSubWindowEvent(EPlayerInfoSubWindowBtnType SubWindowType, bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void DecideCheckPopupEvent(EPlayerInfoSubWindowBtnType SubWindowType, bool bIsError);
    
};

