#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EDriverAnimMontageId.h"
#include "RacerAnimPlayerHandler.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class URacerAnimPlayerHandler : public UInterface {
    GENERATED_BODY()
};

class IRacerAnimPlayerHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimation(const EDriverAnimMontageId ID);
    
};

