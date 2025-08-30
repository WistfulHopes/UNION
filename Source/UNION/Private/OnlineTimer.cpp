#include "OnlineTimer.h"

UOnlineTimer::UOnlineTimer() : UUserWidget(FObjectInitializer::Get()) {
    this->TimeCount = 0;
    this->StartTimeCount = 60;
    this->AlertTimeCount = 5;
    this->UpdateTime = 0.00f;
    this->IsTimeOut = false;
    this->IsAlert = false;
    this->IsStartTimer = false;
    this->IsStopTimer = false;
    this->ChangeCountSoundCue = NULL;
    this->TimeOutSoundCue = NULL;
}

void UOnlineTimer::UpdateTimeCount_Implementation(float InDeltaTime) {
}

void UOnlineTimer::StopTimer_Implementation() {
}

void UOnlineTimer::StartTimer_Implementation() {
}

void UOnlineTimer::SetTimeCount_Implementation(int32 InValue) {
}

void UOnlineTimer::SetStartTimeCount_Implementation(int32 InValue) {
}

void UOnlineTimer::OnInitialize_Implementation() {
}

bool UOnlineTimer::IsStopTimeCount() {
    return false;
}

int32 UOnlineTimer::GetTimeCount_Implementation() {
    return 0;
}

int32 UOnlineTimer::GetStartTimeCount_Implementation() {
    return 0;
}

void UOnlineTimer::EndTimer_Implementation() {
}

bool UOnlineTimer::AlreadyTimeOut() {
    return false;
}


