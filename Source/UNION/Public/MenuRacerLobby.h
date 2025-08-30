#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UserMachineCustomizeData.h"
#include "MenuRacerBase.h"
#include "MenuRacerLobby.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class UNION_API AMenuRacerLobby : public AMenuRacerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SelectEffectSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SelectEffectComponent;
    
public:
    AMenuRacerLobby(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnOrVisibleCrown(bool bIsNotSpawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityCrown(bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForcedLod(int32 NewForcedLodModel);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSelectEffect(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAll(EDriverId InDriverId, FUserMachineCustomizeData InCustomizeData, bool bIsSpawnCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenCrown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibleCrownfromRacerVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeMachineColor(int32 InGroupIndex, bool InEnableEffect);
    
};

