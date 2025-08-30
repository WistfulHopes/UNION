#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Collider.h"
#include "ColliderHitResult.h"
#include "ColliderHitWeaponResult.h"
#include "EUnionSurfaceType.h"
#include "UnionSurfaceFlag.h"
#include "ColliderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UColliderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FColliderComponentWeaponDelegate, UColliderComponent, ColliderComponentWeaponDelegate, const FColliderHitWeaponResult&, Hit);
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FColliderComponentDelegate, UColliderComponent, ColliderComponentDelegate, const FColliderHitResult&, Hit);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollider _Collision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColliderComponentDelegate OnCollision;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColliderComponentWeaponDelegate OnCollisionWeapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSurfaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionSurfaceFlag EditSurfaceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSurfaceType EditSurfaceType;
    
public:
    UColliderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSurfaceType(EUnionSurfaceType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceFlag(FUnionSurfaceFlag flag);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransform(FTransform trans);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectCollisionEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProcessEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckScaleEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScaleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetOverrideTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetObjectCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetFinalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollisionProcessEnabled() const;
    
};

