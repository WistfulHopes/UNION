#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogueEventData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FDialogueEventData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> EventDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TextDataTable;
    
    UNION_API FDialogueEventData();
};

