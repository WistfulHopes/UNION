#include "PartyRacePresetDetail.h"

UPartyRacePresetDetail::UPartyRacePresetDetail() : UUserWidget(FObjectInitializer::Get()) {
    this->_PresetIconImage = NULL;
    this->_PresetIconMaterial = NULL;
    this->_PresetImageImage = NULL;
    this->_PresetNameText = NULL;
    this->_PresetNameMaterial = NULL;
    this->_PresetDetailText = NULL;
}

void UPartyRacePresetDetail::SetPreset(int32 PresetIndex, const FText& PresetName, const FText& PresetDetail, const FLinearColor& PresetColor, UTexture2D* ImageTexture) {
}


