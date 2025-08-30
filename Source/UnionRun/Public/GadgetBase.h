#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GadgetMessageInterface.h"
#include "GadgetBase.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UGadgetBase : public UObject, public IGadgetMessageInterface {
    GENERATED_BODY()
public:
    UGadgetBase();


    // Fix for true pure virtual functions not being implemented
};

