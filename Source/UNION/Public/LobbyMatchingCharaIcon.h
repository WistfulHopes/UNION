#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UnionUISceneBase.h"
#include "LobbyMatchingCharaIcon.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API ULobbyMatchingCharaIcon : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WS_StatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
public:
    ULobbyMatchingCharaIcon();

    UFUNCTION(BlueprintCallable)
    void SetChangeStatusIcon(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeOnlineIcon(bool bIsOnline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetUpCharaIconEvent(EDriverId InDriverId, const TSoftObjectPtr<UTexture2D>& InTexture);
    
};

