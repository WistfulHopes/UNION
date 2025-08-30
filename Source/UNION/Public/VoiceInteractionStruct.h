#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDriverId.h"
#include "VoiceInteractionStruct.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FVoiceInteractionStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId VoiceDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, USoundAtomCue*> VoiceMap;
    
    UNION_API FVoiceInteractionStruct();
};

