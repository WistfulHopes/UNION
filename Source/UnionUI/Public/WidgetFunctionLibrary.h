#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureDefines.h"
#include "ImageWriteTypes.h"
#include "EWidgetZOrder.h"
#include "WidgetFunctionLibrary.generated.h"

class UTextureRenderTarget2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UNIONUI_API UWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWidgetZOrder(EWidgetZOrder Layer, int32 Priority, int32& ZOrder);
    
    UFUNCTION(BlueprintCallable)
    static void GetWidgetCenterLocation(UWidget* Widget, UWidget* ParentWidget, FVector2D& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static void ExportWidgetAsImage(UUserWidget* Widget, const FString& Filename, const FVector2D DrawSize, const float Scale, const EDesiredImageFormat Format, const bool bOverwriteFile, const bool bAsync, const TEnumAsByte<TextureFilter> Filter, const bool bUseGammaCorrection);
    
    UFUNCTION(BlueprintCallable)
    static void DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CulcDigitNumber(int32 Index, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvMilliSecondToSecond(int32 Millisecond);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvMilliSecondToMinute(int32 Millisecond);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardPaste(FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const FString& str);
    
};

