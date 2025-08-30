#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBlockPlayerState.h"
#include "ELobbyCameraMoveType.h"
#include "EMatchingLobbyType.h"
#include "EPlayerInfoSubWindowBtnType.h"
#include "LobbyPlayerData.h"
#include "MenuSequenceSubStateBase.h"
#include "PlayerProfileHideActorStruct.h"
#include "PlayerProfileState.generated.h"

class AActor;
class AMenuCameraManager;
class AMenuRacerLobby;
class UCommonLineMessageWidget;
class UCommonMessageBar;
class UOnlinePlayerDetailBase;
class USoundAtomCue;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPlayerProfileState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerProfileSendRequestAnimEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileSendNiceDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileDecideReportDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileDecidePopUpDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileDecideKickDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileDecideFriendDelegate, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileDecideBlockDelegate, const FString&, UserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerProfileClosedErrorWindowEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProfileChangedPlayerDelegate, int32, Index);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedTop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuRacerLobby* Racer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyPlayerData ProfilePlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockPlayerState BlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNPCProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSentNice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZoomInEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPutLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CameraSlideSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> OffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LookAtOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TopMenuOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TopMenuLookAtOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TopMenuCameraManualDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LobbyCameraManualDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectUserProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectUserPlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectUserPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuCameraManager* PlayerDetailCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlinePlayerDetailBase* PlayerDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerNiceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerProfileHideActorStruct> LobbyPlayerProfileHideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerProfileHideActorStruct> TopMenuPlayerProfileHideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerProfileHideActorStruct> FestaPlayerProfileHideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerProfileHideActorStruct> NSWirelessPlayerProfileHideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMessageBar* MessageBarSceneObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLineMessageWidget* RequestFriendMessageBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> BlockWindowWaitingTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisconenctErrorWindowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CubotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OrbotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DodonpaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendRequestBarShowTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfileChangedPlayerDelegate OnPlayerChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProfileSendNiceDelegate OnPlayerSebdNiceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendRequestBarSuccessText;
    
    UPlayerProfileState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowRacers(bool bIsAll);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLobbyRacerProfile(AMenuRacerLobby* InRacer, int32 InCurrentRacerIndex, FLobbyPlayerData InLobbyPlayerData, bool InbIsOwner, bool InbIsSentNice, bool InbIsNPC, const FString& InUniqueNetIdRepl, EBlockPlayerState InBlockType, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, int32 InNiceCount, int32 InFakeIndex, const FString& InPlatformId, const FString& InPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyNPCActor(AActor* InCubotActor, AActor* InOrbotActor, AActor* InDodonpaActor);
    
    UFUNCTION(BlueprintCallable)
    void SetChangedNextProfile(AMenuRacerLobby* InRacer, int32 InCurrentRacerIndex, FLobbyPlayerData InLobbyPlayerData, bool bInIsOwner, bool bInIsSentNice, bool bInIsNPC, const FString& InUniqueNetIdRepl, EBlockPlayerState InBlockType, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, int32 InFakeIndex, const FString& InPlatformId, const FString& InPlatform);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraManager(AMenuCameraManager* InCameraManager);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateNiceCount(int32 InNiceCount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetChangedNextProfileEvent(bool bIsSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRequestBarWindowAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnProfileDisconnectErrorWindow(UUnionUIButtonBase* Object, int32 InBtnIndex, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerProfileCameraMoveEndEvent(ELobbyCameraMoveType MoveType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFourceEndEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDecideReportUser();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidePopup(EPlayerInfoSubWindowBtnType InBtnType);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideKickUser();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideFriendRequestUser();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideBlockUser();
    
    UFUNCTION(BlueprintCallable)
    void HideRacers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyPlayerIndex(bool bIsInputLeft);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPlayerProfileHideActorStruct> GetHideMemberList();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetCameraViewOffsetPos(bool bIsTopMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetCameraOffsetPos(bool bIsTopMenu);
    
};

