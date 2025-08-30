#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionChallengeManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionChallengeManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FChallengeClearNoticeEvent, int32, InChallengeId, float, InTime);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeClearNoticeEvent ShowChallengeClearNoticeEvent;
    
    UUnionChallengeManager();

    UFUNCTION(BlueprintCallable)
    void SetIsRaceSequence(bool IsRace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRaceSequence() const;
    
};

