#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Blueprint/UserWidget.h"
#include "WidgetManDebugString.generated.h"

class UFont;

UCLASS(Blueprintable)
class UNIONUI_API UWidgetManDebugString : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ShadowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowHideFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* FontObject;
    
    UWidgetManDebugString();

    UFUNCTION(BlueprintCallable)
    void SetShowHide(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOffset(FLinearColor NewColor, float NewOffsetX, float NewOffsetY);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float NewX, float NewY);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugString(FString& String);
    
    UFUNCTION(BlueprintCallable)
    void Draw_Internal(FPaintContext& PaintContext);
    
    UFUNCTION(BlueprintCallable)
    void ClearDebugString();
    
    UFUNCTION(BlueprintCallable)
    void AppendDebugString(const FString& InString);
    
};

