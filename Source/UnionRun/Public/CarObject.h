#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitTriggerInfo.h"
#include "ItemMessageInterface.h"
#include "CarObject.generated.h"

class UGadgetComponent;
class USceneComponent;
class UTriggerComponent;

UCLASS(Blueprintable)
class ACarObject : public AActor, public IItemMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGadgetComponent* GadgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ColliderRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* HitCommonTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* HitEventTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* RingTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerComponent* RingAbsorbTrigger;
    
    ACarObject(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHitRingTriggerConflict(const FHitTriggerInfo& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnHitEventTriggerConflict(const FHitTriggerInfo& HitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnHitCommonTriggerConflict(const FHitTriggerInfo& HitInfo);
    

    // Fix for true pure virtual functions not being implemented
};

