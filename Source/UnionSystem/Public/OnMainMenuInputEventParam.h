#pragma once
#include "CoreMinimal.h"
#include "EMenuInputKey.h"
#include "OnMainMenuInputEventParam.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FOnMainMenuInputEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuInputKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UNIONSYSTEM_API FOnMainMenuInputEventParam();
};

