#pragma once
#include "CoreMinimal.h"
#include "GimmickTriggerMotionBase.h"
#include "GimmickTriggerMotionSkeletal.generated.h"

class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickTriggerMotionSkeletal : public AGimmickTriggerMotionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* _SkeletalMeshComponent;
    
public:
    AGimmickTriggerMotionSkeletal(const FObjectInitializer& ObjectInitializer);

};

