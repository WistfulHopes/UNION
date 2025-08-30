#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionItemInfoInterface.h"
#include "UnionRacerEventManager.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionRacerEventManager : public UObject, public IUnionItemInfoInterface {
    GENERATED_BODY()
public:
    UUnionRacerEventManager();


    // Fix for true pure virtual functions not being implemented
};

