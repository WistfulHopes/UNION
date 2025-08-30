#include "RaceUISubLap.h"

URaceUISubLap::URaceUISubLap() : UUserWidget(FObjectInitializer::Get()) {
    this->LapRT = NULL;
    this->LapCountTextures.AddDefaulted(3);
    this->LapCountMaterialInstance = NULL;
    this->CurrentLapMID = NULL;
    this->MaxLapMID = NULL;
}

void URaceUISubLap::UpdateLapCount(float InDelta) {
}

void URaceUISubLap::SetMaxLapMID(UMaterialInstanceDynamic* Mid) {
}

void URaceUISubLap::SetMaxLap(int32 Lap) {
}

void URaceUISubLap::SetCurrentLapMID(UMaterialInstanceDynamic* Mid) {
}

void URaceUISubLap::SetCurrentLap(int32 Lap) {
}

void URaceUISubLap::InitializeLapCount(UTextureRenderTarget2D* InRenderTarget) {
}


