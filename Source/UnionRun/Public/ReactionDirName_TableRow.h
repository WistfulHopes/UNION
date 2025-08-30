#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReactionDirName.h"
#include "ReactionDirName_TableRow.generated.h"

USTRUCT(BlueprintType)
struct FReactionDirName_TableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReactionDirName> list;
    
    UNIONRUN_API FReactionDirName_TableRow();
};

