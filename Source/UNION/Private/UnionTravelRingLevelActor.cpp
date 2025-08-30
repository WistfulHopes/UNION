#include "UnionTravelRingLevelActor.h"

AUnionTravelRingLevelActor::AUnionTravelRingLevelActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TravelRingMainCourseParamTable = NULL;
    this->TravelRingAnotherCourseParamTable = NULL;
}

bool AUnionTravelRingLevelActor::StartTravelRingsAsync(const UObject* WorldContextObject) {
    return false;
}

bool AUnionTravelRingLevelActor::StartTravelRings(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    return false;
}

void AUnionTravelRingLevelActor::Setup(int32 LevelIndex, int32 LevelId, int32 PlayerId) {
}

EDomainNumber AUnionTravelRingLevelActor::GetSelectDomainNumber() const {
    return EDomainNumber::DomainNumber0;
}

int32 AUnionTravelRingLevelActor::GetPlayerId() const {
    return 0;
}

int32 AUnionTravelRingLevelActor::GetLevelIndex() const {
    return 0;
}

int32 AUnionTravelRingLevelActor::GetLevelId() const {
    return 0;
}

bool AUnionTravelRingLevelActor::AddTravelRingByReference(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, int32 PlayerId, int32 LevelIndex, int32 LevelId, int32 LightChannel, FVector Location, TSoftObjectPtr<UWorld> Dependant) {
    return false;
}

bool AUnionTravelRingLevelActor::AddTravelRing(const UObject* WorldContextObject, FName LevelName, int32 PlayerId, int32 LevelIndex, int32 LevelId, int32 LightChannel, FVector Location, FName Dependan) {
    return false;
}


