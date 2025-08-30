#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EChallengeAchivement.h"
#include "ChallengeAchievementStruct.generated.h"

USTRUCT(BlueprintType)
struct FChallengeAchievementStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EChallengeAchivement> AchivementColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> AchivementID;
    
    UNIONSYSTEM_API FChallengeAchievementStruct();
};

