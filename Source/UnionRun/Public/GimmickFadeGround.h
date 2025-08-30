#pragma once
#include "CoreMinimal.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickFadeGround.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickFadeGround : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_staticMeshComponent;
    
    AGimmickFadeGround(const FObjectInitializer& ObjectInitializer);

};

