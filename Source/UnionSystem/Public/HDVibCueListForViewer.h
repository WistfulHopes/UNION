#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HDVibCueListForViewer.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FHDVibCueListForViewer : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Cue;
    
    UNIONSYSTEM_API FHDVibCueListForViewer();
};

