#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "LocalizeRuntimeTextArray.h"
#include "LocalizeRuntimeKeytopText.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLocalizeRuntimeKeytopText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizeRuntimeTextArray Texts;
    
    FLocalizeRuntimeKeytopText();
};

