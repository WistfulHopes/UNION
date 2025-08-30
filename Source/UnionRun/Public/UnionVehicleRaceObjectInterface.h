#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AttackedInfo.h"
#include "EUnionSurfaceType.h"
#include "EVehicleControlEvent.h"
#include "EVehicleDisplayMode.h"
#include "EVehicleSound.h"
#include "EVehicleSpecialStatusEvent.h"
#include "EVehicleSpecialStatusType.h"
#include "UnionVehicleRaceObjectInterface.generated.h"

class AActor;
class UObject;
class USoundAtomCue;
class UUnionRacerStatusObject;

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionVehicleRaceObjectInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionVehicleRaceObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLocalPlayerSetting(const int32& PlayerControllerIndex, const int32& LocalPlayerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityMachineBody(bool NewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USoundAtomCue* SetVehicleSurfaceTypeSound(EVehicleSound VehicleSound, EUnionSurfaceType SurfaceType, USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USoundAtomCue* SetVehicleSound(EVehicleSound VehicleSound, USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVehicleMeshVisibility(bool NewVisibility, bool bRootCockpitComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVehicleDisplayMode(EVehicleDisplayMode NewVehicleDisplayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerStatusObject(UUnionRacerStatusObject* NewObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerIndex(const int32& NewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLoadSkipForMonster(bool bSkip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLightChannel(int32 LightChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCockpitMeshSize(float NewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveInputRecieveObject(UObject* InObjectRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRacerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetDrone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EUnionSurfaceType GetCurrentSurfaceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetActiveItemPerfomanceObjects(TArray<AActor*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecVehicleControlEventSpecialStatus(EVehicleSpecialStatusEvent EventId, const EVehicleSpecialStatusType Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecVehicleControlEventInt(EVehicleControlEvent EventId, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecVehicleControlEventFloat(EVehicleControlEvent EventId, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecVehicleControlEventAttackedInfo(EVehicleControlEvent EventId, const FAttackedInfo& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeNomalMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeMonsterTruckMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeMiniMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginWaitInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddInputRecieveObject(UObject* InObjectRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateCameraIF(bool bActivate);
    
};

