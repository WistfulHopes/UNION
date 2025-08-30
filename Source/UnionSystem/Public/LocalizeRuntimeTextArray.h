#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizeRuntimeTextArray.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLocalizeRuntimeTextArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Texts;
    
    FLocalizeRuntimeTextArray();
};

