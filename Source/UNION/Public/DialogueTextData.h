#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogueTextData.generated.h"

USTRUCT(BlueprintType)
struct FDialogueTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UNION_API FDialogueTextData();
};

