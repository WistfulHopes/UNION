#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "EPackageRingType.h"
#include "ESpecialObjGroup.h"
#include "ItemMessageInterface.h"
#include "RingColliderParam.h"
#include "UnionCourseObjectBase.h"
#include "PackageRingObject.generated.h"

class URelocationMovement;
class USceneComponent;
class USuckedMovement;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API APackageRingObject : public AUnionCourseObjectBase, public ICollisionMessageInterface, public IItemMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingColliderParam _ColliderParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageRingType PackageRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _RespawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuckedMovement* SuckedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelocationMovement* RelocationMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoToggleEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoEnableStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoDisableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoEnableTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObjGroup m_SpecialGroup;
    
public:
    APackageRingObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRingType(EPackageRingType Type);
    
    UFUNCTION(BlueprintCallable)
    void HitRacer(int32 RacerIndex);
    

    // Fix for true pure virtual functions not being implemented
};

