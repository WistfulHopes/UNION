#pragma once
#include "CoreMinimal.h"
#include "GimmickMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickTentacle.generated.h"

class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickTentacle : public AUnionGimmickObjectBase, public IGimmickMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* VATMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_IdleEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MoveEndFrame;
    
public:
    AGimmickTentacle(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

