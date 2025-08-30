#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UserTutorialData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageId, bool> TutorialCompletedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialPopupDisp;
    
    FUserTutorialData();
};

