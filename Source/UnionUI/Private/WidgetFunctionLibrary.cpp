#include "WidgetFunctionLibrary.h"

UWidgetFunctionLibrary::UWidgetFunctionLibrary() {
}

void UWidgetFunctionLibrary::GetWidgetZOrder(EWidgetZOrder Layer, int32 Priority, int32& ZOrder) {
}

void UWidgetFunctionLibrary::GetWidgetCenterLocation(UWidget* Widget, UWidget* ParentWidget, FVector2D& OutLocation) {
}

void UWidgetFunctionLibrary::ExportWidgetAsImage(UUserWidget* Widget, const FString& Filename, const FVector2D DrawSize, const float Scale, const EDesiredImageFormat Format, const bool bOverwriteFile, const bool bAsync, const TEnumAsByte<TextureFilter> Filter, const bool bUseGammaCorrection) {
}

void UWidgetFunctionLibrary::DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
}

int32 UWidgetFunctionLibrary::CulcDigitNumber(int32 Index, int32 Num) {
    return 0;
}

float UWidgetFunctionLibrary::ConvMilliSecondToSecond(int32 Millisecond) {
    return 0.0f;
}

FString UWidgetFunctionLibrary::ConvMilliSecondToMinute(int32 Millisecond) {
    return TEXT("");
}

void UWidgetFunctionLibrary::ClipboardPaste(FString& Dest) {
}

void UWidgetFunctionLibrary::ClipboardCopy(const FString& str) {
}


