#pragma once
#include "CoreMinimal.h"
#include "RankingDataRankMatchUserNoteCharacterUsage.generated.h"

USTRUCT(BlueprintType)
struct FRankingDataRankMatchUserNoteCharacterUsage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 characterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 usageCount;
    
    UNIONSYSTEM_API FRankingDataRankMatchUserNoteCharacterUsage();
};

