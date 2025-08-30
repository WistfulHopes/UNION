#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UnionCueSheetIdDataTable.generated.h"

class UUnionCueSheetIdDataAsset;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUnionCueSheetIdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionCueSheetIdDataAsset* CueSheetIds;
    
    FUnionCueSheetIdDataTable();
};

