#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EAppControllerInputType.h"
#include "EControllerButtonTextureIndex.h"
#include "EControllerButtonTextureType.h"
#include "EMenuKeyboardButtonTextureIndex.h"
#include "LocalizeRuntimeTextArray.h"
#include "AppPlayerControllerSubsystem.generated.h"

class AAppPlayerController;
class APlayerController;
class UControllerButtonData;
class UMaterialInstanceDynamic;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppPlayerControllerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EControllerButtonTextureIndex> ButtonNameToTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> ButtonMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> TagToActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, UMaterialInstanceDynamic*> KeyToButtonMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, EControllerButtonTextureIndex> KeyToPadTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentButtonTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControllerButtonData* FKeyToControllerTextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentDisplayKeyboardLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentDisplayKeytopPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EControllerButtonTextureIndex, EMenuKeyboardButtonTextureIndex> PadToMenuKeyboardTextureIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAppPlayerController*> AppPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FLocalizeRuntimeTextArray> KeyToKeytopTextMap;
    
public:
    UAppPlayerControllerSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateButtonMaterialByDeviceType(uint8 DeviceType);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureForButtonMaterials(UObject* InTextureObj);
    
    UFUNCTION(BlueprintCallable)
    AAppPlayerController* SetPlayer(int32 ControllerId, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonTextureType(EControllerButtonTextureType InTextureType);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(int32 ControllerId, bool bDestroyPawn);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDeviceChangeInterface(int32 InPlayerControllerIndex, UObject* InIFObject);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMenuMouseButtonTexture();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMenuKeyboardButtonTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCurrentDisplayKeytopPattern(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetCurrentDeviceTexture();
    
    UFUNCTION(BlueprintCallable)
    int32 GetControllerTextureIndexFromFKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    AAppPlayerController* GetAppPlayerController(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    AAppPlayerController* CreatePlayer(int32 ControllerId, bool bSpawnPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void CallChangeControllerInputType(int32 InPlayerControllerIndex, EAppControllerInputType InControllerInputType);
    
    UFUNCTION(BlueprintCallable)
    EAppControllerInputType CalcCurrentDeviceButtonTexture(int32 PlayerControllerIndex, UTexture2D*& OutTexure);
    
    UFUNCTION(BlueprintCallable)
    void AddDeviceChangeInterface(int32 InPlayerControllerIndex, UObject* InIFObject);
    
};

