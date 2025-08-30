#include "MatchmakingSubsystem.h"
#include "Templates/SubclassOf.h"

UMatchmakingSubsystem::UMatchmakingSubsystem() {
    this->MatchmakingRequestContext = NULL;
}

void UMatchmakingSubsystem::StartMatchmaking(int32 LocalUserNum, UMatchmakingRequestContext* NewContext, FOnGameMatchmakingComplete OnComplete) {
}

void UMatchmakingSubsystem::SetMatchmakingCompleteDelegate(FOnGameMatchmakingComplete Delegate) {
}

UMatchmakingRequestContext* UMatchmakingSubsystem::GetCurrentMatchmakingContext(bool& bIsExists) {
    return NULL;
}

void UMatchmakingSubsystem::EndMatchmaking(int32 LocalUserNum) {
}

UMatchmakingRequestContext* UMatchmakingSubsystem::CreateMatchmakingContext(TSubclassOf<UMatchmakingRequestContext> MatchmakingContextClass) {
    return NULL;
}

void UMatchmakingSubsystem::ClearAllDelegates() {
}

void UMatchmakingSubsystem::CancelMatchmaking(int32 LocalUserNum) {
}


