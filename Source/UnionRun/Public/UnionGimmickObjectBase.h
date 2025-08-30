#pragma once
#include "CoreMinimal.h"
#include "EGimmickContactType.h"
#include "ETimingGimmickType.h"
#include "ItemMessageInterface.h"
#include "UnionCourseObjectBase.h"
#include "UnionGimmickObjectBase.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AUnionGimmickObjectBase : public AUnionCourseObjectBase, public IItemMessageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ComAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComAvoidWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimingGimmickType TimingGimmickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ComBeneficial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVioletVoidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGimmickContactType GimmickContactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackGroundGimmick;
    
public:
    AUnionGimmickObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

