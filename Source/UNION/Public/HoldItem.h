#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EItemId.h"
#include "HoldItemAnimator.h"
#include "HoldItemCreateParam.h"
#include "HoldItem.generated.h"

class ADriver;
class UMeshComponent;
class UUnionAtomComponent;

UCLASS(Blueprintable)
class UNION_API AHoldItem : public AActor, public IHoldItemAnimator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* UnionAtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFromItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADriver> OwnerDriver;
    
    AHoldItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLightChannels(bool Channel0, bool Channel1, bool Channel2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreCreate(const FHoldItemCreateParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUseEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRareItemEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLuckyItemEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGetEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitDestroy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Destroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Create(const FHoldItemCreateParam& Param);
    

    // Fix for true pure virtual functions not being implemented
};

