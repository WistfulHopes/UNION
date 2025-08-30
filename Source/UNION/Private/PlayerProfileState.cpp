#include "PlayerProfileState.h"
#include "EMenuSequenceSubState.h"

UPlayerProfileState::UPlayerProfileState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("PlayerProfile");
    this->DefaultMenuState = EMenuSequenceSubState::PlayerProfile;
    this->bIsUsedTop = false;
    this->Racer = NULL;
    this->RacerIndex = 0;
    this->BlockType = EBlockPlayerState::None;
    this->bIsOwnerProfile = false;
    this->bIsNPCProfile = false;
    this->bIsSentNice = false;
    this->bIsOwnerHost = false;
    this->LobbyType = EMatchingLobbyType::None;
    this->bZoomInEnd = false;
    this->bIsPutLeft = false;
    this->bIsUsingCamera = false;
    this->CameraSlideSoundCue = NULL;
    this->OffsetPos.AddDefaulted(2);
    this->LookAtOffsetPos.AddDefaulted(2);
    this->TopMenuOffsetPos.AddDefaulted(2);
    this->TopMenuLookAtOffsetPos.AddDefaulted(2);
    this->TopMenuCameraManualDistance.AddDefaulted(2);
    this->LobbyCameraManualDistance.AddDefaulted(2);
    this->PlayerDetailCameraManager = NULL;
    this->PlayerDetailWidget = NULL;
    this->OwnerNiceCount = 0;
    this->MessageBarSceneObject = NULL;
    this->RequestFriendMessageBar = NULL;
    this->CubotActor = NULL;
    this->OrbotActor = NULL;
    this->DodonpaActor = NULL;
    this->PopupWindow = NULL;
    this->FriendRequestBarShowTime = 1.00f;
    this->bIsAlone = false;
}

void UPlayerProfileState::ShowRacers(bool bIsAll) {
}

void UPlayerProfileState::SetLobbyRacerProfile(AMenuRacerLobby* InRacer, int32 InCurrentRacerIndex, FLobbyPlayerData InLobbyPlayerData, bool InbIsOwner, bool InbIsSentNice, bool InbIsNPC, const FString& InUniqueNetIdRepl, EBlockPlayerState InBlockType, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, int32 InNiceCount, int32 InFakeIndex, const FString& InPlatformId, const FString& InPlatform) {
}

void UPlayerProfileState::SetLobbyNPCActor(AActor* InCubotActor, AActor* InOrbotActor, AActor* InDodonpaActor) {
}

void UPlayerProfileState::SetChangedNextProfile(AMenuRacerLobby* InRacer, int32 InCurrentRacerIndex, FLobbyPlayerData InLobbyPlayerData, bool bInIsOwner, bool bInIsSentNice, bool bInIsNPC, const FString& InUniqueNetIdRepl, EBlockPlayerState InBlockType, bool bInIsOwnHost, EMatchingLobbyType InLobbyType, int32 InFakeIndex, const FString& InPlatformId, const FString& InPlatform) {
}

void UPlayerProfileState::SetCameraManager(AMenuCameraManager* InCameraManager) {
}

void UPlayerProfileState::OnUpdateNiceCount(int32 InNiceCount) {
}


void UPlayerProfileState::OnRequestBarWindowAnimEnd() {
}

void UPlayerProfileState::OnProfileDisconnectErrorWindow(UUnionUIButtonBase* Object, int32 InBtnIndex, int32 InIndex) {
}

void UPlayerProfileState::OnPlayerProfileCameraMoveEndEvent_Implementation(ELobbyCameraMoveType MoveType) {
}

void UPlayerProfileState::OnFourceEndEvent() {
}

void UPlayerProfileState::OnDecideReportUser() {
}

void UPlayerProfileState::OnDecidePopup(EPlayerInfoSubWindowBtnType InBtnType) {
}

void UPlayerProfileState::OnDecideKickUser() {
}

void UPlayerProfileState::OnDecideFriendRequestUser() {
}

void UPlayerProfileState::OnDecideBlockUser() {
}

void UPlayerProfileState::HideRacers() {
}

int32 UPlayerProfileState::GetLobbyPlayerIndex(bool bIsInputLeft) {
    return 0;
}

TArray<FPlayerProfileHideActorStruct> UPlayerProfileState::GetHideMemberList() {
    return TArray<FPlayerProfileHideActorStruct>();
}

TArray<FVector> UPlayerProfileState::GetCameraViewOffsetPos(bool bIsTopMenu) {
    return TArray<FVector>();
}

TArray<FVector> UPlayerProfileState::GetCameraOffsetPos(bool bIsTopMenu) {
    return TArray<FVector>();
}


