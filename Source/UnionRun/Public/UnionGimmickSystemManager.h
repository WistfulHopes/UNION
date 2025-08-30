#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionGimmickSystemManager.generated.h"

class AItemBoxEffectObject;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionGimmickSystemManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemBoxEffectObject* m_itemBoxEffectObject;
    
public:
    UUnionGimmickSystemManager();

};

