#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "Subsystems/WorldSubsystem.h"
#include "EMenuRacerType.h"
#include "EMenuSequenceMainState.h"
#include "ETopMenuPlayNum.h"
#include "Templates/SubclassOf.h"
#include "MenuWorldSubsystem.generated.h"

class AActor;
class AMenuRacerBase;
class APlayerController;
class UCharaMachineSelectSettingDataAsset;
class UCharaMachineSelectsBase;
class UComCharaMachineLottery;
class UCommonMenuFooterMenu;
class UCommonMenuHeaderMenu;
class UCommonMenuSubMenu;
class UDataTable;
class ULevelStreaming;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class UNION_API UMenuWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TopMenuBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BlueFlagMenuBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETopMenuPlayNum SelectedTopMenuPlayNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommonMenuTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuSubMenu* CommonSubMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterMenu* Footer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuHeaderMenu* Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceMainState PrevMenuSequenceMainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectsBase* CharaMachineSelectWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComCharaMachineLottery* ComCharaMachineLottery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharaMachineSelectSettingDataAsset* CharaMachineSelectSettingDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstStateInCharaMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMenuRacerBase> MenuRacerPreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMenuRacerBase> MenuRacerLobbyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMenuRacerBase*> MenuRacers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMenuRacerBase*> LobbyRacers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTopMenuLevelName;
    
public:
    UMenuWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTopMenuLevelName();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void UnLoadLevelTopMenu(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstStateInCharaMachine(bool bInIsFirstState);
    
    UFUNCTION(BlueprintCallable)
    float ReadyBeforeLoadLevelTopMenu();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    ULevelStreaming* LoadLevelTopMenu(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsNeedUnloadAnyTopMenuLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstStateInCharaMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfTopMenuStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfGarageStage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubLevelNameOfCharaMachineSelect();
    
    UFUNCTION(BlueprintCallable)
    TArray<AMenuRacerBase*> GetMenuRacers(EMenuRacerType Type);
    
    UFUNCTION(BlueprintCallable)
    AMenuRacerBase* GetMenuRacer(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<AMenuRacerBase*> GetLobbyRacers();
    
    UFUNCTION(BlueprintCallable)
    AMenuRacerBase* GetLobbyRacer(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentTopMenuLevelName();
    
    UFUNCTION(BlueprintCallable)
    UComCharaMachineLottery* GetComCharaMachineLottery();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaMachineSelectsBase* GetCharaMachineSelectWindow() const;
    
    UFUNCTION(BlueprintCallable)
    UCharaMachineSelectSettingDataAsset* GetCharaMachineSelectSettingDataAsset();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULevelStreaming* GetAlreadyLoadNeedSubLevel(const UObject* WorldContextObject, bool& bIsAlreadyLoad);
    
    UFUNCTION(BlueprintCallable)
    TArray<AMenuRacerBase*> GetAllMenuRacers();
    
    UFUNCTION(BlueprintCallable)
    void EndProcessAfterLoadLevelTopMenu(float OriginalAsyncLoadingTimeLimit);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMenuRacers(EMenuRacerType Type);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMenuRacer(const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void DeleteCharaMachineSelect();
    
    UFUNCTION(BlueprintCallable)
    AMenuRacerBase* CreateMenuRacer(const int32& PlayerIndex, EMenuRacerType Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CreateCharaMachineSelect(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer);
    
};

