#pragma once
#include "CoreMinimal.h"
#include "GadgetBase.h"
#include "UnionItemInfoInterface.h"
#include "GadgetShortenItemSlotTime.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UGadgetShortenItemSlotTime : public UGadgetBase, public IUnionItemInfoInterface {
    GENERATED_BODY()
public:
    UGadgetShortenItemSlotTime();


    // Fix for true pure virtual functions not being implemented
};

