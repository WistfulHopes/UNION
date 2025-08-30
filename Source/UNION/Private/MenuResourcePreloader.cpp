#include "MenuResourcePreloader.h"
#include "Templates/SubclassOf.h"

AMenuResourcePreloader::AMenuResourcePreloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElementClass = NULL;
}

void AMenuResourcePreloader::StartLoad() {
}

void AMenuResourcePreloader::SetupPlayerCount(int32 localPlayerNum) {
}

void AMenuResourcePreloader::NotifyChangeCursorByIndexWithPlayerIndex(int32 PlayerIndex, int32 CursorIndex) {
}

void AMenuResourcePreloader::NotifyChangeCursorByIndex(int32 Index) {
}

void AMenuResourcePreloader::NotifyChangeCursor(int32 RowIndex, int32 ColumnIndex) {
}

void AMenuResourcePreloader::Initialize(int32 InRowNum, int32 InColumnNum, int32 FirstRowIndex, int32 FirstColumnIndex, int32 LoadCount, TSubclassOf<UMenuResourceElement> Class, TArray<UMenuResourceElement*>& OutElements) {
}

void AMenuResourcePreloader::FinishLoad() {
}


