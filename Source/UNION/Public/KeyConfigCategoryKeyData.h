#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyConfigCategoryKeyData.generated.h"

USTRUCT(BlueprintType)
struct FKeyConfigCategoryKeyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyBord_Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyBord_Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Gamepad;
    
    UNION_API FKeyConfigCategoryKeyData();
};

