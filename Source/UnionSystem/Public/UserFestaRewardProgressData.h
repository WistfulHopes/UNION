#pragma once
#include "CoreMinimal.h"
#include "UserFestaRewardProgressData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserFestaRewardProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetRoundRewardSheetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetPointRewardSheetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetPointRewardIndex;
    
    FUserFestaRewardProgressData();
};

