#include "MenuWorldSubsystem.h"
#include "Templates/SubclassOf.h"

UMenuWorldSubsystem::UMenuWorldSubsystem() {
    this->TopMenuBG = NULL;
    this->BlueFlagMenuBG = NULL;
    this->SelectedTopMenuPlayNum = ETopMenuPlayNum::None;
    this->CommonMenuTextDataTable = NULL;
    this->CommonSubMenu = NULL;
    this->Footer = NULL;
    this->Header = NULL;
    this->PrevMenuSequenceMainState = EMenuSequenceMainState::Idle;
    this->CharaMachineSelectWindow = NULL;
    this->ComCharaMachineLottery = NULL;
    this->CharaMachineSelectSettingDataAsset = NULL;
    this->bIsFirstStateInCharaMachine = true;
    this->MenuRacerPreviewClass = NULL;
    this->MenuRacerLobbyClass = NULL;
}

void UMenuWorldSubsystem::UpdateCurrentTopMenuLevelName() {
}

void UMenuWorldSubsystem::UnLoadLevelTopMenu(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UMenuWorldSubsystem::SetFirstStateInCharaMachine(bool bInIsFirstState) {
}

float UMenuWorldSubsystem::ReadyBeforeLoadLevelTopMenu() {
    return 0.0f;
}

ULevelStreaming* UMenuWorldSubsystem::LoadLevelTopMenu(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    return NULL;
}

bool UMenuWorldSubsystem::IsNeedUnloadAnyTopMenuLevel(const UObject* WorldContextObject) {
    return false;
}

bool UMenuWorldSubsystem::IsFirstStateInCharaMachine() const {
    return false;
}

FName UMenuWorldSubsystem::GetSubLevelNameOfTopMenuStage() {
    return NAME_None;
}

FName UMenuWorldSubsystem::GetSubLevelNameOfGarageStage() {
    return NAME_None;
}

FName UMenuWorldSubsystem::GetSubLevelNameOfCharaMachineSelect() {
    return NAME_None;
}

TArray<AMenuRacerBase*> UMenuWorldSubsystem::GetMenuRacers(EMenuRacerType Type) {
    return TArray<AMenuRacerBase*>();
}

AMenuRacerBase* UMenuWorldSubsystem::GetMenuRacer(const int32& PlayerIndex) {
    return NULL;
}

TArray<AMenuRacerBase*> UMenuWorldSubsystem::GetLobbyRacers() {
    return TArray<AMenuRacerBase*>();
}

AMenuRacerBase* UMenuWorldSubsystem::GetLobbyRacer(const int32& PlayerIndex) {
    return NULL;
}

FName UMenuWorldSubsystem::GetCurrentTopMenuLevelName() {
    return NAME_None;
}

UComCharaMachineLottery* UMenuWorldSubsystem::GetComCharaMachineLottery() {
    return NULL;
}

UCharaMachineSelectsBase* UMenuWorldSubsystem::GetCharaMachineSelectWindow() const {
    return NULL;
}

UCharaMachineSelectSettingDataAsset* UMenuWorldSubsystem::GetCharaMachineSelectSettingDataAsset() {
    return NULL;
}

ULevelStreaming* UMenuWorldSubsystem::GetAlreadyLoadNeedSubLevel(const UObject* WorldContextObject, bool& bIsAlreadyLoad) {
    return NULL;
}

TArray<AMenuRacerBase*> UMenuWorldSubsystem::GetAllMenuRacers() {
    return TArray<AMenuRacerBase*>();
}

void UMenuWorldSubsystem::EndProcessAfterLoadLevelTopMenu(float OriginalAsyncLoadingTimeLimit) {
}

void UMenuWorldSubsystem::DestroyMenuRacers(EMenuRacerType Type) {
}

void UMenuWorldSubsystem::DestroyMenuRacer(const int32& PlayerIndex) {
}

void UMenuWorldSubsystem::DeleteCharaMachineSelect() {
}

AMenuRacerBase* UMenuWorldSubsystem::CreateMenuRacer(const int32& PlayerIndex, EMenuRacerType Type) {
    return NULL;
}

void UMenuWorldSubsystem::CreateCharaMachineSelect(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) {
}


