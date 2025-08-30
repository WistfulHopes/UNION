#include "UnionUITransitionManager.h"

UUnionUITransitionManager::UUnionUITransitionManager() {
    this->FadeWidgetRef = NULL;
    this->SubFadeWidgetRef = NULL;
    this->LastDisplayedSceneUI = NULL;
    this->CrossFadeWidget = NULL;
    this->MovieTransitionWidget = NULL;
    this->LoadingDisplayWidget = NULL;
    this->RivalTransitionWidget = NULL;
}

void UUnionUITransitionManager::StartSubFade(EUnionUIFadeColor FadeColor, EUnionUIFadeDirection FadeDirection, FOnFinishedFadeSingle OnFinished) {
}

void UUnionUITransitionManager::StartRivalTransition() {
}

void UUnionUITransitionManager::StartLoopFade(EUnionUIFadeColor FadeColor) {
}

void UUnionUITransitionManager::StartFade(EUnionUIFadeColor FadeColor, EUnionUIFadeDirection FadeDirection, FOnFinishedFadeSingle OnFinished) {
}

void UUnionUITransitionManager::SetShouldCheckFadeIgnoreInput(bool ShouldIgnore) {
}

void UUnionUITransitionManager::SetRivalTransitionType(const ERivalTransitionType TransitionType) {
}

void UUnionUITransitionManager::SetLastDisplayedSceneUIVisible(bool bRemove, ESlateVisibility InVisibility) {
}

void UUnionUITransitionManager::SetLastDisplayedSceneUI(UUserWidget* InLastDisplayedSceneUI) {
}

bool UUnionUITransitionManager::IsPlayingFade() const {
    return false;
}

bool UUnionUITransitionManager::IsLastFadeDirectionOut() const {
    return false;
}

bool UUnionUITransitionManager::IsLastFadeDirectionIn() const {
    return false;
}

UUnionUIFade* UUnionUITransitionManager::GetUIFadeWidget() {
    return NULL;
}

UUnionUIRivalTransition* UUnionUITransitionManager::GetRivalTransitionWidget() {
    return NULL;
}

int32 UUnionUITransitionManager::GetNowLoadingZOrder() {
    return 0;
}

UUnionUIMovieTransition* UUnionUITransitionManager::GetMovieTransitionWidget() {
    return NULL;
}

UUnionUILoadingDisplay* UUnionUITransitionManager::GetLoadingDisplayWidget() {
    return NULL;
}

ELoadingDisplayType UUnionUITransitionManager::GetLoadingDisplayType() {
    return ELoadingDisplayType::Race;
}

EUnionUIFadeColor UUnionUITransitionManager::GetLastFadeColor() const {
    return EUnionUIFadeColor::Black;
}

UUserWidget* UUnionUITransitionManager::GetLastDisplayedSceneUI() {
    return NULL;
}

UUnionUICrossFade* UUnionUITransitionManager::GetCrossFadeWidget() {
    return NULL;
}

void UUnionUITransitionManager::ForceCallFinishedFadeEvent() {
}

void UUnionUITransitionManager::FinishSubFade(EUnionUIFadeDirection FadeDirection) {
}

void UUnionUITransitionManager::FinishFade(EUnionUIFadeDirection FadeDirection) {
}

void UUnionUITransitionManager::DestroyRivalTransitionWidget() {
}

void UUnionUITransitionManager::DestroyMovieTransitionWidget() {
}

void UUnionUITransitionManager::DestroyLoadingDisplayWidget() {
}

void UUnionUITransitionManager::DestroyCrossFadeWidget() {
}

UUnionUIRivalTransition* UUnionUITransitionManager::CreateRivalTransitionWidget() {
    return NULL;
}

UUnionUIMovieTransition* UUnionUITransitionManager::CreateMovieTransitionWidget() {
    return NULL;
}

UUnionUILoadingDisplay* UUnionUITransitionManager::CreateLoadingDisplayWidget(ELoadingDisplayType CreateType) {
    return NULL;
}

UUnionUICrossFade* UUnionUITransitionManager::CreateCrossFadeWidget() {
    return NULL;
}

void UUnionUITransitionManager::AutoStartLoopFade() {
}

void UUnionUITransitionManager::AutoReverseFade() {
}


