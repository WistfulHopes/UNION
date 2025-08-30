#pragma once
#include "CoreMinimal.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickMoveRunwayBoo.generated.h"

class USceneComponent;
class UUnionVATAnimEventComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickMoveRunwayBoo : public AUnionGimmickObjectBase {
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
    AGimmickMoveRunwayBoo(const FObjectInitializer& ObjectInitializer);

};

