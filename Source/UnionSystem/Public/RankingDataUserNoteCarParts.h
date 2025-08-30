#pragma once
#include "CoreMinimal.h"
#include "RankingDataUserNoteCarParts.generated.h"

USTRUCT(BlueprintType)
struct FRankingDataUserNoteCarParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frontId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rearId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tireId;
    
    UNIONSYSTEM_API FRankingDataUserNoteCarParts();
};

