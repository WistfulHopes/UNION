#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "GrandPrixDisplayWidgetFile.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FGrandPrixDisplayWidgetFile : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> Widget;
    
    UNIONSYSTEM_API FGrandPrixDisplayWidgetFile();
};

