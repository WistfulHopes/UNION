#include "UnionSpeedClassLibrary.h"

UUnionSpeedClassLibrary::UUnionSpeedClassLibrary() {
}

bool UUnionSpeedClassLibrary::IsTimeTrialActive(const ESpeedClassId InId) {
    return false;
}

uint8 UUnionSpeedClassLibrary::GetTimeTrialIndex(const ESpeedClassId InId) {
    return 0;
}

float UUnionSpeedClassLibrary::GetMinSpeedByClass(const ESpeedClassId ClassId) {
    return 0.0f;
}

float UUnionSpeedClassLibrary::GetMaxSpeedByClass(const ESpeedClassId ClassId) {
    return 0.0f;
}


