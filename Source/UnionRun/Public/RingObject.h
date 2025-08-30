#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionMessageInterface.h"
#include "ERingExtndType.h"
#include "ESpecialObjGroup.h"
#include "ItemMessageInterface.h"
#include "RingColliderParam.h"
#include "UnionCourseObjectBase.h"
#include "RingObject.generated.h"

class URelocationMovement;
class USceneComponent;
class UStaticBodyComponent;
class USuckedMovement;

UCLASS(Blueprintable)
class UNIONRUN_API ARingObject : public AUnionCourseObjectBase, public ICollisionMessageInterface, public IItemMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingColliderParam _ColliderParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuckedMovement* SuckedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URelocationMovement* RelocationMovement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RingScaleByExtndType[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _RespawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _FinalLapChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _FinalLapRingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _FinalLapRingOffset;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERingExtndType RingExtndType;
    
public:
    ARingObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRingType();
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinalLapChange(bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinalLapChange();
    
    UFUNCTION(BlueprintCallable)
    float GetFinalLapRingOffset();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFinalLapRingNum();
    

    // Fix for true pure virtual functions not being implemented
};

