#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GroupUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FGroupUIData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    FGroupUIData();
};

