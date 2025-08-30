#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ECarStatusType.h"
#include "EMachineHornType.h"
#include "ESoundPan.h"
#include "MachineHornComponent.generated.h"

class UMenuInputRecieveObject;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class USceneComponent;
class USoundAtomCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineHornComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MachineHornNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MachineHornSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MachineHornToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MachineNiagaraHornComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MachineHornEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AttachOffsetRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UMachineHornComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnBindHornInput();
    
    UFUNCTION(BlueprintCallable)
    void SetMachineHornSoundPan(ESoundPan InSoundPan);
    
    UFUNCTION(BlueprintCallable)
    void SetHornEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHornData(EMachineHornType InHornType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachOffsetFromCarType(ECarStatusType InCarType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachOffset(FVector InOffsetLocation, FRotator InOffsetRot);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachHornToMachineData(USceneComponent* InHornToAttach, ECarStatusType InCarType);
    
    UFUNCTION(BlueprintCallable)
    void PlayMachineHorn();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuInputPlayMachineHornObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void OnMenuInputPlayMachineHorn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHorn() const;
    
    UFUNCTION(BlueprintCallable)
    void BindHornInput();
    
};

