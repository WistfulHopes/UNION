#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UnionUISceneBase.h"
#include "EOnlineGameMode.h"
#include "LobbyMatchingUIState.generated.h"

class ULobbyMatchingCharaIcon;
class UOnlineHeaderGameModeIconBase;
class UOverlay;
class URichTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API ULobbyMatchingUIState : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULobbyMatchingCharaIcon*> CharaIconList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* HeaderPlayerjoinText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> HeaderPlayerjoinText_Host;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> HeaderPlayerjoinText_Client;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* HeaderCharaIconPanelOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineHeaderGameModeIconBase* HeaderGameModeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayRemind;
    
public:
    ULobbyMatchingUIState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnlineGameModeIcon(bool bIsMulti, EOnlineGameMode InOnlineGameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginStatus(int32 InIndex, bool bIsOnline);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadyStatus(int32 InIndex, bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverIcon(int32 InIndex, EDriverId InDriverId, TSoftObjectPtr<UTexture2D> InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayLoopRemindAnim(bool bPlayLoopRemind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayInOutAnimation(bool bIsInAnim);
    
};

