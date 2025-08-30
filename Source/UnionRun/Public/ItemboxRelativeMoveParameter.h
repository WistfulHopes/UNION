#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RelativeMoveParameter.h"
#include "ItemboxRelativeMoveParameter.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FItemboxRelativeMoveParameter : public FRelativeMoveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeMoveOffset;
    
    FItemboxRelativeMoveParameter();
};

