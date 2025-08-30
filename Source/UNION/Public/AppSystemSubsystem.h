#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RaceLifeTimeData.h"
#include "AppSystemSubsystem.generated.h"

class UGarbageCollectionInvoker;
class ULapTimer;
class UObject;
class UResidentAssetLoader;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable)
class UNION_API UAppSystemSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGarbageCollectionInvoker* GarbageCollectionInvoker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ULapTimer*> LapTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResidentAssetLoader* ResidentAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* SaveErrorPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastFocusedWidget;
    
public:
    UAppSystemSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetBootSequenceModeShipping(const bool Mode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveErrorPopupRemovedFunc(UUnionUIPopupWindowBase* RemovedPopup);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveErrorPopupGenerateFunc();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveErrorPopupDecisionFunc(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResidentAssetLoader* GetResidentAssetLoader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRaceLifeTimeData GetRaceLifeTimeData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULapTimer* GetOrCreateLapTimer(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool GetBootSequenceModeShipping();
    
};

