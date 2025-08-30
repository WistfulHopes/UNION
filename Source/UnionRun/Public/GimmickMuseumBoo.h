#pragma once
#include "CoreMinimal.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickMuseumBoo.generated.h"

class UUnionVATAnimEventComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickMuseumBoo : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionVATAnimEventComponent*> VATAnimEventList;
    
public:
    AGimmickMuseumBoo(const FObjectInitializer& ObjectInitializer);

};

