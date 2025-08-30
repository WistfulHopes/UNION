#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECarStatusType.h"
#include "EDriverId.h"
#include "EMachineAuraId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMenuRacerType.h"
#include "MenuRacerInterface.h"
#include "Templates/SubclassOf.h"
#include "MenuRacerBase.generated.h"

class UMachineHornComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class UNION_API AMenuRacerBase : public AActor, public IMenuRacerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuRacerType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineCustomizeData MachineCustomizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMachineHornComponent> HornComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineHornComponent* HornComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* EngineSoundFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* EngineSoundRear;
    
    AMenuRacerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetLocalPlayerIndex(int32 InLocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDriverInterface(EDriverId InDriverId, bool bInForcedSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayDriverAnimation(int32 StateId, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateAuraEffect(EMachineAuraId InAuraID, ECarStatusType InType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadSyncEngineSoundRear(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    void LoadSyncEngineSoundFront(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStickerSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateAuraEffectID(EMachineAuraId InAuraID);
    
    UFUNCTION(BlueprintCallable)
    void CreateAuraEffect();
    

    // Fix for true pure virtual functions not being implemented
};

