#pragma once
#include "CoreMinimal.h"
#include "ERaceInputKey.h"
#include "ETutorialControllerDirection.h"
#include "ETutorialControllerOperation.h"
#include "TutorialControllerKey.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTutorialControllerKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceInputKey RaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETutorialControllerDirection> Directions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialControllerOperation KeyOperation;
    
    FTutorialControllerKey();
};

