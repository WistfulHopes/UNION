#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HintTutorialDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FHintTutorialDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialMovieName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExplanatoryText;
    
    FHintTutorialDataTableRow();
};

