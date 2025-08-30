#pragma once
#include "CoreMinimal.h"
#include "AttackReplyInterface.h"
#include "GadgetBase.h"
#include "GadgetStole.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UGadgetStole : public UGadgetBase, public IAttackReplyInterface {
    GENERATED_BODY()
public:
    UGadgetStole();


    // Fix for true pure virtual functions not being implemented
};

