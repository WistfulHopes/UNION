#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TurntableData.generated.h"

USTRUCT(BlueprintType)
struct FTurntableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Rotation;
    
    UNION_API FTurntableData();
};

