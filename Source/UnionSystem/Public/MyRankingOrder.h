#pragma once
#include "CoreMinimal.h"
#include "MyUserNote.h"
#include "MyRankingOrder.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FMyRankingOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMyUserNote userNote;
    
    FMyRankingOrder();
};

