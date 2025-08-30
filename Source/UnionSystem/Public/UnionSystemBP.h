#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/LatentActionManager.h"
#include "EControllerButtonTextureType.h"
#include "ESoundPan.h"
#include "EStageId.h"
#include "EUnionControllerType.h"
#include "EUnionPlatform.h"
#include "SoundHandle.h"
#include "Templates/SubclassOf.h"
#include "UnionSystemBP.generated.h"

class AActor;
class UAtomComponent;
class UDirectionalLightComponent;
class ULevel;
class ULevelStreamingDynamic;
class UObject;
class USaveGame;
class USceneComponent;
class USoundAtomCue;
class USoundAtomCueSheet;
class UUnionSettings;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionSystemBP : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionSystemBP();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadLevelByReference(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle Stop(FSoundHandle Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartLevelsAsync(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static bool StartLevels(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SoundSetPanSplit(ESoundPan Pan);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SoundPlayFFB(USoundAtomCue* Sound, ESoundPan Pan, bool Audio, int32 FFBPlayerBit);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SoundPlay(USoundAtomCue* Sound);
    
    UFUNCTION(BlueprintCallable)
    static void SoundCuesheetUnloadSync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray);
    
    UFUNCTION(BlueprintCallable)
    static void SoundCuesheetLoadSync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray);
    
    UFUNCTION(BlueprintCallable)
    static void SoundCuesheetLoadAsync(TArray<TSoftObjectPtr<USoundAtomCueSheet>> CuesheetArray);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SoundBuildPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetZOrder(UWidget* Widget, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SetVolume(FSoundHandle Handle, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseCustomCulling(bool IsUse);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoundHandle(FSoundHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void SetSEVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SetPanSplit(FSoundHandle Handle, ESoundPan Pan);
    
    UFUNCTION(BlueprintCallable)
    static void SetMasterVolumeMute(bool OnOffFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SetLocation(FSoundHandle Handle, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelFlagsForPSDCache(EStageId StageId0, EStageId StageId1, EStageId StageId2);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameSettings(int32 NumPlayers);
    
    UFUNCTION(BlueprintCallable)
    static void SetFFBVolume(int32 PlayerIndex, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetBootSettings();
    
    UFUNCTION(BlueprintCallable)
    static void SetBGMVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle SetAisacByName(FSoundHandle Handle, const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveHorizontalFlip(bool Active);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendEvent(const UObject* WorldContextObject, ULevel* Level, FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetLevelFlagsForPSDCache();
    
    UFUNCTION(BlueprintCallable)
    static void ResetGameSettings();
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveLevel(ULevelStreamingDynamic* StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle PlayFFB(FSoundHandle Handle, USoundAtomCue* Sound, ESoundPan Pan, bool Aduio, int32 FFBPlayerBit);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle Play(FSoundHandle Handle, USoundAtomCue* Sound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenLevelByReference(const UObject* WorldContextObject, const TSoftObjectPtr<UWorld> Level, bool bAbsolute, const FString& Options);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadPS4GameSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadDemoGameSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseCustomCulling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlaying(FSoundHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVoiceVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundHandle GetSoundHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSEVolume();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetPlatformResource(EUnionControllerType Type, EUnionPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetPlatformIcon(EUnionPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetPlatformControllerButtonImage(EControllerButtonTextureType Type, EUnionPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetMenuMouseButtonImage();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetMenuKeyboardButtonImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMasterVolumeMute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMasterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelNameByReference(const TSoftObjectPtr<UWorld> SoftWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName(const UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static UUnionSettings* GetGameSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFFBVolume(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBGMVolume();
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* GetAtomComponent(FSoundHandle Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfLevel(const UObject* WorldContextObject, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActorOfLevelByClass(const AActor* Target, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDirectionalLight(int32 LightChannel, UDirectionalLightComponent*& DirectionalLight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesPackageExist(const FString& LongPackageName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteInvalidSaveData(bool& bOutQuitGame);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearLevels(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FSoundHandle AttachTo(FSoundHandle Handle, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static bool AllLevelLoaded();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddLevelByReference(const UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, bool Load, bool Visible, int32 LightChannel, FVector Location, TSoftObjectPtr<UWorld> Dependant);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddLevel(const UObject* WorldContextObject, FName LevelName, bool Load, bool Visible, int32 LightChannel, FVector Location, FName Dependant);
    
    UFUNCTION(BlueprintCallable)
    static void AddCustomPresent();
    
};

