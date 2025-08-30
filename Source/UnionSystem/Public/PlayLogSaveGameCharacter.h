#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameCharacterData.h"
#include "PlayLogSaveGameCharacter.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameCharacterData Data[10];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameCharacter();
};

