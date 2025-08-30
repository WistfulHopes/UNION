#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TutorialControllerKeys.h"
#include "TutorialControllerKeysTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FTutorialControllerKeysTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialControllerKeys> KeyOperationsArray;
    
    FTutorialControllerKeysTable();
};

