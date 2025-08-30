#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "WidgetManBaseWidget.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UWidgetManDebugString;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UWidgetManBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DebugInfoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UWidgetManDebugString*> DebugStringObjectSet;
    
    UWidgetManBaseWidget();

    UFUNCTION(BlueprintCallable)
    void RemoveChild(UUserWidget* Widget, bool& IsSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void DetachDebugStringObject(UWidgetManDebugString* DebugStringObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearDebugString();
    
    UFUNCTION(BlueprintCallable)
    void AttachDebugStringObject(UWidgetManDebugString* DebugStringObject);
    
    UFUNCTION(BlueprintCallable)
    void AppendDebugString(const FString& String__const);
    
    UFUNCTION(BlueprintCallable)
    void AddChild(UUserWidget* ChildWidget, UCanvasPanelSlot* ChildSlot, int32 ZOrder);
    
};

