#include "CallDroneInfo.h"

FCallDroneInfo::FCallDroneInfo() {
    this->ShowType = EDroneShowType::Invalid;
    this->CurrentLap = EDroneCurrentLap::Lap3;
    this->Distance = EDroneRemainDistance::DistanceUnknown;
    this->DismissType = EDroneDismissType::AllType;
}

