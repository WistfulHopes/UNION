#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDriverId.h"
#include "HoldItemCreateParam.h"
#include "ItemHolderComponent.generated.h"

class AHoldItem;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UItemHolderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HoldItemDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHoldItem* HoldItemActor;
    
public:
    UItemHolderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseItem();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetupDefaultPosition();
    
    UFUNCTION(BlueprintCallable)
    bool SetupComponent(const EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    void SetLightChannels(bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenItem(const bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultPositionSetup() const;
    
    UFUNCTION(BlueprintCallable)
    bool HoldItem(const FHoldItemCreateParam& Param);
    
};

