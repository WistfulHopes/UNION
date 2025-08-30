#include "UnionRichTextBlock.h"
#include "Templates/SubclassOf.h"

UUnionRichTextBlock::UUnionRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->AutoWrapText = true;
    this->TextStyleName = TEXT("Default");
    this->BaseEnFontSize = 66;
    this->CurrentLetterIndex = 0;
    this->CurrentOriginalLetterIndex = 0;
    this->CurrentLineIndex = 0;
    this->CurrentSegmentIndex = 0;
    this->CurrentOriginalEndIndex = 0;
    this->CurrentTaggedIndex = 0;
    this->OnlyTagContentLetterIndex = 0;
    this->bIsScrollingEnabled = false;
    this->ScrollSpeed = 25.00f;
    this->ScrollStartDelay = 0.50f;
    this->ScrollEndDelay = 0.50f;
    this->ScrollFadeInDelay = 0.00f;
    this->ScrollFadeOutDelay = 0.00f;
    this->PlayerIndex = 0;
}

void UUnionRichTextBlock::UpdateText(TSubclassOf<URichTextBlockDecorator> DecoratorClass) {
}

void UUnionRichTextBlock::UpdateOriginalLetterIndex() {
}

void UUnionRichTextBlock::SetSequentialText(const FText& InText) {
}

void UUnionRichTextBlock::SetScrollEnable(bool bInEnableScroll) {
}

void UUnionRichTextBlock::SetFontMaterialForDefaultTextStyleOverride(UObject* FontBodyMaterial, UObject* OutlineMaterial) {
}

void UUnionRichTextBlock::SetDefaultFontSize(int32 NewSize) {
}

void UUnionRichTextBlock::RemoveXml(const FString& InString, FString& OutString) {
}

void UUnionRichTextBlock::PlayNextLetter() {
}

void UUnionRichTextBlock::ParseBaseText() {
}

bool UUnionRichTextBlock::IsPlayLetterEnd() {
    return false;
}

void UUnionRichTextBlock::InitFontSizeSetting() {
}

bool UUnionRichTextBlock::GetScrollEnable() const {
    return false;
}

void UUnionRichTextBlock::GetFontMaterialsFromDefaultTextStyleOverride(UObject*& FontBodyMaterial, UObject*& OutlineMaterial) {
}

int32 UUnionRichTextBlock::GetDefaultFontSize() const {
    return 0;
}


