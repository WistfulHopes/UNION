#include "UnionErrorUtils.h"

UUnionErrorUtils::UUnionErrorUtils() {
}

void UUnionErrorUtils::SetSeverErrorWithTopMenuText(EResponseCodeAbstract ResponseCode, int32 Code) {
}

void UUnionErrorUtils::SetSeverError(EResponseCodeAbstract ResponseCode, int32 Code) {
}

void UUnionErrorUtils::SetNetworkErrorWithTopMenuText(EOnlineErrorId ErrorID) {
}

void UUnionErrorUtils::SetNetworkError(EOnlineErrorId ErrorID) {
}

void UUnionErrorUtils::ResetReLoginFlag() {
}

bool UUnionErrorUtils::IsNeedReLogin() {
    return false;
}

bool UUnionErrorUtils::IsDisplayedErrorViewer() {
    return false;
}

bool UUnionErrorUtils::IsAddFairPlayPoints() {
    return false;
}

bool UUnionErrorUtils::HasRaceFatalError() {
    return false;
}

FText UUnionErrorUtils::GetServerErrorTitleText(EResponseCodeAbstract ResponseCode) {
    return FText::GetEmpty();
}

FText UUnionErrorUtils::GetServerErrorReturnMenuText(EResponseCodeAbstract ResponseCode, int32 AppendId) {
    return FText::GetEmpty();
}

FText UUnionErrorUtils::GetServerErrorBodyText(EResponseCodeAbstract ResponseCode, int32 AppendId) {
    return FText::GetEmpty();
}

FText UUnionErrorUtils::GetOnlineErrorTitleText(EOnlineErrorId ErrorID) {
    return FText::GetEmpty();
}

FText UUnionErrorUtils::GetOnlineErrorReturnMenuText(EOnlineErrorId ErrorID, int32 AppendId) {
    return FText::GetEmpty();
}

FText UUnionErrorUtils::GetOnlineErrorBodyText(EOnlineErrorId ErrorID, int32 AppendId) {
    return FText::GetEmpty();
}

EErrorLevel UUnionErrorUtils::GetErrorLevel() {
    return EErrorLevel::NonError;
}

void UUnionErrorUtils::DbgSetNetworkErrorWithText(EOnlineErrorId ErrorID, const FText& BodyText) {
}

void UUnionErrorUtils::DbgSetNetworkErrorWithString(EOnlineErrorId ErrorID, const FString& BodyStr) {
}

bool UUnionErrorUtils::CheckReturnTitleError(EResponseCodeAbstract ResponseCodeAbstract) {
    return false;
}


