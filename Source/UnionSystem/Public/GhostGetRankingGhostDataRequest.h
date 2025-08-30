#pragma once
#include "CoreMinimal.h"
#include "GhostGetRankingGhostDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FGhostGetRankingGhostDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 speedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DrivingTime;
    
    UNIONSYSTEM_API FGhostGetRankingGhostDataRequest();
};

