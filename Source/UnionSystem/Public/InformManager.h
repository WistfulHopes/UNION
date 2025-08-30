#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InformManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UInformManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UInformManager();

    UFUNCTION(BlueprintCallable)
    void InformAboutAbuse(const FString& TargetUserId, int32 reasonId, int32 Location, const FString& reasonMemo, int32 GameMode, const FString& entryRaceId);
    
};

