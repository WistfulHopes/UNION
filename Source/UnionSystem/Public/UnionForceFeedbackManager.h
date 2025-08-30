#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionForceFeedbackManager.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionForceFeedbackManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* PresetForceFeedbackEffects[44];
    
public:
    UUnionForceFeedbackManager();

};

