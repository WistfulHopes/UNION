#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESupportedCulture.h"
#include "FakeComName.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FFakeComName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESupportedCulture Language;
    
    FFakeComName();
};

