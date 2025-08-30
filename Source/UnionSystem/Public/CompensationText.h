#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CompensationText.generated.h"

USTRUCT(BlueprintType)
struct FCompensationText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tips;
    
    UNIONSYSTEM_API FCompensationText();
};

