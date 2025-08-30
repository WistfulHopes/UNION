#include "UnionDateTime.h"

UUnionDateTime::UUnionDateTime() {
}

int64 UUnionDateTime::ToUnixTimestamp() {
    return 0;
}

void UUnionDateTime::SetServerTime(const FDateTime& InServerTime) {
}

int32 UUnionDateTime::GetUnionYear() {
    return 0;
}

FDateTime UUnionDateTime::GetUnionUtcNow() {
    return FDateTime{};
}

int32 UUnionDateTime::GetUnionSecond() {
    return 0;
}

FDateTime UUnionDateTime::GetUnionNow() {
    return FDateTime{};
}

int32 UUnionDateTime::GetUnionMonth() {
    return 0;
}

int32 UUnionDateTime::GetUnionMinute() {
    return 0;
}

int32 UUnionDateTime::GetUnionMillisecond() {
    return 0;
}

int32 UUnionDateTime::GetUnionHour() {
    return 0;
}

int32 UUnionDateTime::GetUnionDay() {
    return 0;
}

FDateTime UUnionDateTime::GetServerTime() {
    return FDateTime{};
}

FDateTime UUnionDateTime::FromUnixTimestamp(int64 UnixTime) {
    return FDateTime{};
}


