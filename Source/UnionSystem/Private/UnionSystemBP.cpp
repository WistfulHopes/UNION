#include "UnionSystemBP.h"
#include "Templates/SubclassOf.h"

UUnionSystemBP::UUnionSystemBP() {
}

void UUnionSystemBP::UnloadLevelByReference(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
}

void UUnionSystemBP::UnloadLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload) {
}

FSoundHandle UUnionSystemBP::Stop(FSoundHandle Handle) {
    return FSoundHandle{};
}

bool UUnionSystemBP::StartLevelsAsync(const UObject* WorldContextObject) {
    return false;
}

bool UUnionSystemBP::StartLevels(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    return false;
}

void UUnionSystemBP::SoundSetPanSplit(ESoundPan Pan) {
}

FSoundHandle UUnionSystemBP::SoundPlayFFB(USoundAtomCue* Sound, ESoundPan Pan, bool Audio, int32 FFBPlayerBit) {
    return FSoundHandle{};
}

FSoundHandle UUnionSystemBP::SoundPlay(USoundAtomCue* Sound) {
    return FSoundHandle{};
}

void UUnionSystemBP::SoundCuesheetUnloadSync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray) {
}

void UUnionSystemBP::SoundCuesheetLoadSync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray) {
}

void UUnionSystemBP::SoundCuesheetLoadAsync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray) {
}

FSoundHandle UUnionSystemBP::SoundBuildPlayer() {
    return FSoundHandle{};
}

bool UUnionSystemBP::SetZOrder(UWidget* Widget, int32 ZOrder) {
    return false;
}

FSoundHandle UUnionSystemBP::SetVolume(FSoundHandle Handle, float Volume) {
    return FSoundHandle{};
}

void UUnionSystemBP::SetVoiceVolume(float Volume) {
}

void UUnionSystemBP::SetUseCustomCulling(bool IsUse) {
}

void UUnionSystemBP::SetSoundHandle(FSoundHandle Handle) {
}

void UUnionSystemBP::SetSEVolume(float Volume) {
}

FSoundHandle UUnionSystemBP::SetPanSplit(FSoundHandle Handle, ESoundPan Pan) {
    return FSoundHandle{};
}

void UUnionSystemBP::SetMasterVolumeMute(bool OnOffFlag) {
}

void UUnionSystemBP::SetMasterVolume(float Volume) {
}

FSoundHandle UUnionSystemBP::SetLocation(FSoundHandle Handle, FVector Location) {
    return FSoundHandle{};
}

void UUnionSystemBP::SetLevelFlagsForPSDCache(EStageId StageId0, EStageId StageId1, EStageId StageId2) {
}

void UUnionSystemBP::SetGameSettings(int32 NumPlayers) {
}

void UUnionSystemBP::SetFFBVolume(int32 PlayerIndex, float Volume) {
}

void UUnionSystemBP::SetBootSettings() {
}

void UUnionSystemBP::SetBGMVolume(float Volume) {
}

FSoundHandle UUnionSystemBP::SetAisacByName(FSoundHandle Handle, const FString& ControlName, float ControlValue) {
    return FSoundHandle{};
}

void UUnionSystemBP::SetActiveHorizontalFlip(bool Active) {
}

void UUnionSystemBP::SendEvent(const UObject* WorldContextObject, ULevel* Level, FName EventName) {
}

bool UUnionSystemBP::SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return false;
}

void UUnionSystemBP::ResetLevelFlagsForPSDCache() {
}

void UUnionSystemBP::ResetGameSettings() {
}

bool UUnionSystemBP::RemoveLevel(ULevelStreamingDynamic* StreamingLevel) {
    return false;
}

FSoundHandle UUnionSystemBP::PlayFFB(FSoundHandle Handle, USoundAtomCue* Sound, ESoundPan Pan, bool Aduio, int32 FFBPlayerBit) {
    return FSoundHandle{};
}

FSoundHandle UUnionSystemBP::Play(FSoundHandle Handle, USoundAtomCue* Sound) {
    return FSoundHandle{};
}

void UUnionSystemBP::OpenLevelByReference(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bAbsolute, const FString& Options) {
}

void UUnionSystemBP::OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options) {
}

USaveGame* UUnionSystemBP::LoadPS4GameSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

USaveGame* UUnionSystemBP::LoadGameFromSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

USaveGame* UUnionSystemBP::LoadDemoGameSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

bool UUnionSystemBP::IsUseCustomCulling() {
    return false;
}

bool UUnionSystemBP::IsPlaying(FSoundHandle Handle) {
    return false;
}

float UUnionSystemBP::GetVoiceVolume() {
    return 0.0f;
}

FSoundHandle UUnionSystemBP::GetSoundHandle() {
    return FSoundHandle{};
}

float UUnionSystemBP::GetSEVolume() {
    return 0.0f;
}

UObject* UUnionSystemBP::GetPlatformResource(EUnionControllerType Type, EUnionPlatform Platform) {
    return NULL;
}

UObject* UUnionSystemBP::GetPlatformIcon(EUnionPlatform Platform) {
    return NULL;
}

UObject* UUnionSystemBP::GetPlatformControllerButtonImage(EControllerButtonTextureType Type, EUnionPlatform Platform) {
    return NULL;
}

UObject* UUnionSystemBP::GetMenuMouseButtonImage() {
    return NULL;
}

UObject* UUnionSystemBP::GetMenuKeyboardButtonImage() {
    return NULL;
}

bool UUnionSystemBP::GetMasterVolumeMute() {
    return false;
}

float UUnionSystemBP::GetMasterVolume() {
    return 0.0f;
}

FString UUnionSystemBP::GetLevelNameByReference(const TSoftObjectPtr<UWorld> SoftWorld) {
    return TEXT("");
}

FString UUnionSystemBP::GetLevelName(const UWorld* World) {
    return TEXT("");
}

UUnionSettings* UUnionSystemBP::GetGameSettings() {
    return NULL;
}

float UUnionSystemBP::GetFFBVolume(int32 PlayerIndex) {
    return 0.0f;
}

float UUnionSystemBP::GetBGMVolume() {
    return 0.0f;
}

UAtomComponent* UUnionSystemBP::GetAtomComponent(FSoundHandle Handle) {
    return NULL;
}

void UUnionSystemBP::GetAllActorsOfLevel(const UObject* WorldContextObject, TArray<AActor*>& OutActors) {
}

AActor* UUnionSystemBP::GetActorOfLevelByClass(const AActor* Target, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

bool UUnionSystemBP::FindDirectionalLight(int32 LightChannel, UDirectionalLightComponent*& DirectionalLight) {
    return false;
}

bool UUnionSystemBP::DoesPackageExist(const FString& LongPackageName) {
    return false;
}

void UUnionSystemBP::DeleteInvalidSaveData(bool& bOutQuitGame) {
}

void UUnionSystemBP::ClearLevels(const UObject* WorldContextObject) {
}

FSoundHandle UUnionSystemBP::AttachTo(FSoundHandle Handle, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return FSoundHandle{};
}

bool UUnionSystemBP::AllLevelLoaded() {
    return false;
}

bool UUnionSystemBP::AddLevelByReference(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, bool Load, bool Visible, int32 LightChannel, FVector Location, TSoftObjectPtr<UWorld> Dependant) {
    return false;
}

bool UUnionSystemBP::AddLevel(const UObject* WorldContextObject, FName LevelName, bool Load, bool Visible, int32 LightChannel, FVector Location, FName Dependant) {
    return false;
}

void UUnionSystemBP::AddCustomPresent() {
}


