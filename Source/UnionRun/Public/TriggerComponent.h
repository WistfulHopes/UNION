#pragma once
#include "CoreMinimal.h"
#include "CollisionBaseComponent.h"
#include "CollisionHitInfo.h"
#include "CollisionHitResultInfo.h"
#include "EUnionSurfaceType.h"
#include "HitTriggerInfo.h"
#include "UnionSurfaceFlag.h"
#include "TriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UTriggerComponent : public UCollisionBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FTriggerComponent, UTriggerComponent, TriggerComponentDelegate, const FHitTriggerInfo&, HitInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSurfaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionSurfaceFlag EditSurfaceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSurfaceType EditSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCDSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CCDValidDistance;
    
    UTriggerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSurfaceType(EUnionSurfaceType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceFlag(FUnionSurfaceFlag flag);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionHitResult(const FCollisionHitResultInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionBaseHit(const FCollisionHitInfo& Info);
    
};

