#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DialogueSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FDialogueSoundData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue;
    
    UNION_API FDialogueSoundData();
};

