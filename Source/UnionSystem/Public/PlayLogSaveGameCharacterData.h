#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameCharacterData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseCountDriver[89];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameCharacterData();
};

