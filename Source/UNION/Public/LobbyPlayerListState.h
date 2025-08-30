#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "MenuSequenceSubStateBase.h"
#include "PlayerNameContext.h"
#include "LobbyPlayerListState.generated.h"

class UCanvasPanel;
class UObject;
class UOnlinePlayerNameButton;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UUnionUISceneBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyPlayerListState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* PlayerNameButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* BaseScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PlayerNameButtonCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WidgetForBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSquadMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TargetTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
public:
    ULobbyPlayerListState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnFocusPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityPlayerName(int32 InButtonIndex, ESlateVisibility InVisibility, ESlateVisibility InPlatformIconVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityOwnerIcon(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityAllPlayerName(ESlateVisibility InVisibility, ESlateVisibility InPlatformIconVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(UUnionUISceneBase* InBaseScene, UCanvasPanel* InCanvasPanel, bool InIsSquadMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerNameViewportPosition(int32 InRacerIndex, FVector InTargetLocation, FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerName(int32 InPlayerIndex, FPlayerNameContext InContext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavigationPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemovePlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(const int32 InPlayerNameMaxCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonsPanel* GetPlayerNameButtonsPanel();
    
    UFUNCTION(BlueprintCallable)
    UOnlinePlayerNameButton* GetOwnPlayerNameButton();
    
    UFUNCTION(BlueprintCallable)
    UUnionUIButtonBase* FocusPrevPlayerName(bool bIsSquad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUnionUIButtonBase* FocusPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UOnlinePlayerNameButton* CreatePlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearPlayerNameButtonsPanel();
    
};

