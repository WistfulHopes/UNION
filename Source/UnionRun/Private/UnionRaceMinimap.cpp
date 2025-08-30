#include "UnionRaceMinimap.h"

UUnionRaceMinimap::UUnionRaceMinimap() : UUserWidget(FObjectInitializer::Get()) {
    this->MainOverlay = NULL;
    this->CurrentDomainIndex = EDomainIndex::DomainIndex0;
    this->CurrentDomainNumber = EDomainNumber::DomainNumber0;
    this->IconsRT = NULL;
    this->RacerIconDatas.AddDefaulted(12);
    this->IconBaseTextures.AddDefaulted(52);
    this->RacerCount = 0;
    this->MinimapBaseRate = -0.01f;
    this->MinimapCourseRate = 1.00f;
    this->MinimapCourseAngle = 0.00f;
    this->bMinimapInited = false;
    this->bMirrorCourse = false;
}

void UUnionRaceMinimap::UpdateMinimap(float InDelta) {
}

void UUnionRaceMinimap::SetRival(int32 RacerIndex, bool IsRival, bool IsPowerRival) {
}

void UUnionRaceMinimap::SetReaderFlag(int32 RacerIndex, const bool& InIsReader) {
}

void UUnionRaceMinimap::SetRacerIconVisibility(int32 RacerIndex, ESlateVisibility NewVisibility) {
}

void UUnionRaceMinimap::SetRacerCount(int32 NewRacerCount) {
}

void UUnionRaceMinimap::SetPositionAndZOrder(int32 RacerIndex, const FVector& InPosition, const uint8& InZOrder) {
}

void UUnionRaceMinimap::SetPosition(int32 RacerIndex, const FVector& InPosition) {
}

void UUnionRaceMinimap::SetPlayerIndex(int32 RacerIndex, int32 PlayerIndex, bool IsPlayer, bool IsLocalMulti) {
}

void UUnionRaceMinimap::SetMinimapIconType(const int32& RacerIndex, const EMinimapIconType& InMinimapIconType) {
}

void UUnionRaceMinimap::SetMinimapIconItem(const int32& RacerIndex, const EItemId& InItemId) {
}

void UUnionRaceMinimap::SetGroupIndex(int32 RacerIndex, int32 GroupIndex) {
}

void UUnionRaceMinimap::SetDriverId(int32 RacerIndex, int32 DriverId) {
}

void UUnionRaceMinimap::SetDomainNumber(int32 InDomainNumber) {
}

void UUnionRaceMinimap::SetDomainIndex(int32 InDomainIndex) {
}


void UUnionRaceMinimap::SetCourseMapCharaSpin(int32 RacerIndex) {
}

void UUnionRaceMinimap::RemoveCourseMapActor(AActor* InAttackItem) {
}

void UUnionRaceMinimap::InitializeRaceData() {
}

void UUnionRaceMinimap::InitializeMinimap(UTextureRenderTarget2D* InRenderTarget) {
}


void UUnionRaceMinimap::AddCourseMapActor(AActor* InAttackItem, EItemId InItemId) {
}


