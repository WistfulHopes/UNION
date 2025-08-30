#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIResultParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUIResultParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    FUIResultParam();
};

