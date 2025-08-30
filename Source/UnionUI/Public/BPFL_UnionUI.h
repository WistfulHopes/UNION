#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Slate/WidgetTransform.h"
#include "ECommonMenuButtonType.h"
#include "EUnionUIControlDir.h"
#include "BPFL_UnionUI.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UNIONUI_API UBPFL_UnionUI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_UnionUI();

    UFUNCTION(BlueprintCallable)
    static void GetWidgetRenderTransform(const UWidget* InWidget, FWidgetTransform& OutRenderTransform);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUserIndexByMouseEvent(const FPointerEvent& InInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUserIndexByInputEvent(const FInputEvent& InInputEvent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetUserIndexByFocusEvent(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTextAddCommasToValue(const int32& InValue);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTerminologyTextByText(const FText InTex);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTerminologyText(const FName InTableId, const FString& InKey);
    
    UFUNCTION(BlueprintCallable)
    static void GetKeyboardControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir);
    
    UFUNCTION(BlueprintCallable)
    static void GetJoyStickControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir);
    
    UFUNCTION(BlueprintCallable)
    static void GetDPadControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir);
    
    UFUNCTION(BlueprintCallable)
    static void GetArrowKeyControlDir(const FKeyEvent& InKeyEvent, EUnionUIControlDir& OutControlDir);
    
    UFUNCTION(BlueprintCallable)
    static ECommonMenuButtonType ConvertMenuButtonType(const FString& InString, bool& OutIsValid);
    
};

