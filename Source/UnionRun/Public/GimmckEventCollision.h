#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStageId.h"
#include "EUnionEventId.h"
#include "CollisionMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmckEventCollision.generated.h"

class USceneComponent;
class UStaticBodyComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmckEventCollision : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_boxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId m_stageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uniqueEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUnionGimmickObjectBase*> SubscribingGimmicks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyRepeatedly;
    
public:
    AGimmckEventCollision(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetEventId(EUnionEventId EventId);
    

    // Fix for true pure virtual functions not being implemented
};

