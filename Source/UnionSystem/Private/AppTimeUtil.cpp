#include "AppTimeUtil.h"

UAppTimeUtil::UAppTimeUtil() {
}

bool UAppTimeUtil::UnionDateTimeParse(FString& DateTimeString, FDateTime& OutDateTime) {
    return false;
}

FTimespan UAppTimeUtil::Sub_DateTimeDateTime(const FDateTime& A, const FDateTime& B) {
    return FTimespan{};
}

FText UAppTimeUtil::ReplaceDateTimePlaceholder(const FText& BaseText, const FDateTime& StartDateTime, const FDateTime& EndDateTime) {
    return FText::GetEmpty();
}

FText UAppTimeUtil::MakeDateTimeText(const FDateTime& DateTime) {
    return FText::GetEmpty();
}

FText UAppTimeUtil::MakeDateText(const FDateTime& DateTime) {
    return FText::GetEmpty();
}

void UAppTimeUtil::LogTimeSpanMillisecondsByNamedDateTimes(const FName& InBeginTimeName, const FName& InEndTimeName) {
}

void UAppTimeUtil::AddNamedDateTimeNow(const FName& InTimeName) {
}


