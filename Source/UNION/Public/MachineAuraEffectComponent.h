#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ECarStatusType.h"
#include "EMachineAuraId.h"
#include "MachineAuraEffectComponent.generated.h"

class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineAuraEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AuraEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TransHoverboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TransMachine;
    
public:
    UMachineAuraEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopEffect();
    
    UFUNCTION(BlueprintCallable)
    void StartEffect();
    
    UFUNCTION(BlueprintCallable)
    void CreateAuraMachine(USceneComponent* InMachineComponent, EMachineAuraId InAuraID, ECarStatusType InCarStatusType);
    
    UFUNCTION(BlueprintCallable)
    void CreateAuraHoverboard(USceneComponent* InDriverComponent, EMachineAuraId InAuraID, ECarStatusType InCarStatusType);
    
};

