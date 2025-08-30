#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GarageCameraMovementTransformData.generated.h"

USTRUCT(BlueprintType)
struct FGarageCameraMovementTransformData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UNION_API FGarageCameraMovementTransformData();
};

