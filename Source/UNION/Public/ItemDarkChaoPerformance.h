#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemMessageInterface.h"
#include "EItemDarkChaoPerfomanceType.h"
#include "ItemPerformanceBase.h"
#include "ItemDarkChaoPerformance.generated.h"

class UDataTable;
class UItemStaticBodyComponent;
class UNiagaraComponent;
class USceneComponent;
class UUnionAtomComponent;
class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AItemDarkChaoPerformance : public AItemPerformanceBase, public IItemMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealEffectPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisappearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisappearHoldMeshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshModelScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* DarkChaoSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* m_ItemBoxMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HoldItemRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* DarkChaoNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* DarckChaoSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* DarckChaoThrowSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* DarckChaoLearveSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemStaticBodyComponent* DarckChaoStaticBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VioletVoidAbsorbTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* tableItemMeshData;
    
    AItemDarkChaoPerformance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SettingRingVisible(bool IsEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRingDisplayTimer(EItemDarkChaoPerfomanceType ChaoType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPerfomanceType(EItemDarkChaoPerfomanceType ChaoType);
    
    UFUNCTION(BlueprintCallable)
    void PlayThrowSound();
    
    UFUNCTION(BlueprintCallable)
    void PlayLeaveSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayItemEffect();
    

    // Fix for true pure virtual functions not being implemented
};

