#pragma once
#include "CoreMinimal.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickMoveFloatBoom.generated.h"

class USceneComponent;
class UUnionVATAnimEventComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickMoveFloatBoom : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATAnimEventComponent* BooVATMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimStartFrame;
    
public:
    AGimmickMoveFloatBoom(const FObjectInitializer& ObjectInitializer);

};

