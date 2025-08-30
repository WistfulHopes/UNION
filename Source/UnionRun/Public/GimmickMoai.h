#pragma once
#include "CoreMinimal.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickMoai.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickMoai : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    AGimmickMoai(const FObjectInitializer& ObjectInitializer);

};

