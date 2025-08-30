#include "UnionRichTextBlockImageDecorator.h"

UUnionRichTextBlockImageDecorator::UUnionRichTextBlockImageDecorator() : URichTextBlockImageDecorator(FObjectInitializer::Get()) {
    this->OverrideImageSet = NULL;
    this->PlayerIndex = 0;
    this->bEachPlayerSetting = false;
}

void UUnionRichTextBlockImageDecorator::SetPlayerIndex(int32 InIndex) {
}

void UUnionRichTextBlockImageDecorator::SetEachPlayer(bool InEachPlayer) {
}

void UUnionRichTextBlockImageDecorator::FindRichSlateBrush(FName TagOrId, FSlateBrush& OutSlateBrush) {
}

void UUnionRichTextBlockImageDecorator::FindRichImageRow(FName TagOrId, FRichImageRow& OutRichImageRow) {
}

void UUnionRichTextBlockImageDecorator::FindResorceObject(FName TagOrId, UObject* OutObject) {
}


