#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELocalStorageStatus.h"
#include "EMachineId.h"
#include "MachineIconSubsystem.generated.h"

class AMachineIconCaptureLevelScriptActor;
class UDataTable;
class UStaticMesh;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNION_API UMachineIconSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCaptureDelegate, EMachineId, MachineId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureDelegate OnIconCaptured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnIconCapturedAll;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMachineIconCaptureLevelScriptActor* CaptureLevelScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMachineId, UTexture2D*> TextureMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SideCenterPartsMesh;
    
public:
    UMachineIconSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
    UFUNCTION(BlueprintCallable)
    void SetSizeY(int32 InSizeY);
    
    UFUNCTION(BlueprintCallable)
    void SetSizeX(int32 InSizeX);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveToLocalStorage(bool bInSave);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineIconCaptureNeededIds(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureDataTable(const UDataTable* InCaptureDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCaptureEnabled(bool bInIsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSideCenterPartsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void LocalStorageSubsystem_OnComplete(ELocalStorageStatus InStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTextureMap(TMap<EMachineId, UTexture2D*>& OutTextureMap) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CaptureLevelScriptActor_OnCaptureCompleted(UTextureRenderTarget2D* InRenderTextureColor, UTextureRenderTarget2D* InRenderTextureAlpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void CaptureFromNeededIds();
    
    UFUNCTION(BlueprintCallable)
    void Capture(EMachineId InMachineID);
    
private:
    UFUNCTION(BlueprintCallable)
    void CallbackLevelLoaded();
    
};

