#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDialogueEventCommand.h"
#include "DialogueSequence.generated.h"

USTRUCT(BlueprintType)
struct FDialogueSequence : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogueEventCommand Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Arg1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Arg2;
    
    UNION_API FDialogueSequence();
};

