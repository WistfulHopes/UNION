#pragma once
#include "CoreMinimal.h"
#include "TutorialControllerKey.h"
#include "TutorialControllerKeys.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTutorialControllerKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialControllerKey> KeyOperations;
    
    FTutorialControllerKeys();
};

