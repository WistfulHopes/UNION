#include "GameActivitySubsystem.h"

UGameActivitySubsystem::UGameActivitySubsystem() {
}

void UGameActivitySubsystem::StartActivity(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, const FStartActivityOption& Option, FGameActivitySubsystemOnStartActivityComplete OnComplete) {
}

void UGameActivitySubsystem::EndActivity(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, const FEndActivityOption& Option, FGameActivitySubsystemOnEndActivityComplete OnComplete) {
}

void UGameActivitySubsystem::ChangeActivityAvailability(int32 LocalUserNum, const FActivityObjectIdData& ActivityIdData, FGameActivitySubsystemOnChangeActivityAvailabilityComplete OnComplete) {
}


