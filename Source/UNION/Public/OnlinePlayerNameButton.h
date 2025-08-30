#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EBlockPlayerState.h"
#include "CommonMenuButtonBase.h"
#include "PlayerNameContext.h"
#include "OnlinePlayerNameButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOnlinePlayerNameButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipSelectSEOnlyOnce;
    
public:
    UOnlinePlayerNameButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityPlatformIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityOwnerIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetViewportPosition(FVector TargetWorldLocation, FVector2D Offset, FVector2D InCanvasSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipSelectSEOnlyOnce(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(const int32& InRankIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIcon(const int32& InPlatformId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNiceCount(const int32 InNiceCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsRival(bool bIsRival);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetContext(FPlayerNameContext InContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlockState(EBlockPlayerState InBlockType);
    
    UFUNCTION(BlueprintCallable)
    bool IsOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActiveWidget(int32 InActiveWidgetIndex);
    
};

