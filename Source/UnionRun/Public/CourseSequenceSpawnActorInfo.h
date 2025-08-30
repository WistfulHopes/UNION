#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "CourseSequenceSpawnActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCourseSequenceSpawnActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> spawnClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform offsetTransform_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName sequenceTriggerLabel_;
    
    UNIONRUN_API FCourseSequenceSpawnActorInfo();
};

