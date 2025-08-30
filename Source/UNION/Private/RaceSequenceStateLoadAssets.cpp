#include "RaceSequenceStateLoadAssets.h"
#include "ERaceSequenceState.h"
#include "ResourceHolder.h"

URaceSequenceStateLoadAssets::URaceSequenceStateLoadAssets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LoadAssets");
    this->DefaultMenuState = ERaceSequenceState::LoadAssets;
    this->bLoadedStageAsset = false;
    this->bLoadedDriverAsset = false;
    this->bLoadedMachinePartsAsset = false;
    this->bLoadedMachineEffectAsset = false;
    this->bEnablePubCamera = false;
    this->StageDataAssetTable = NULL;
    this->ResourceHolder = CreateDefaultSubobject<UResourceHolder>(TEXT("ResourceHolder"));
}

bool URaceSequenceStateLoadAssets::StartStageLevels(const UObject* InWorldContextObject, FLatentActionInfo InLatentInfo) {
    return false;
}

void URaceSequenceStateLoadAssets::StartLoadNative() {
}

bool URaceSequenceStateLoadAssets::ShouldNativeLoad() const {
    return false;
}



void URaceSequenceStateLoadAssets::EndMakePreCreateParam() {
}

void URaceSequenceStateLoadAssets::BeginMakePreCreateParam() {
}

bool URaceSequenceStateLoadAssets::AddTravelRingLevels(const UObject* InWorldContextObject, EDomainIndex InDomainIndex, const UPrimaryStageDataAsset* InStageDataAsset, int32 InLightChannel, const FVector& InLevelOffset, ERaceType InRaceType) {
    return false;
}

void URaceSequenceStateLoadAssets::AddDomainData(const FUnionRaceDomainData& InDomainData) {
}

void URaceSequenceStateLoadAssets::AddBackgroundLevelName(const FString& LevelName) {
}


