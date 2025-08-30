#pragma once
#include "CoreMinimal.h"
#include "Common_FestaBonusChanceData.h"
#include "CommonLobbyMemberContext.h"
#include "FestaLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UFestaLobbyMemberContext : public UCommonLobbyMemberContext {
    GENERATED_BODY()
public:
    UFestaLobbyMemberContext();

    UFUNCTION(BlueprintCallable)
    void SendEntryRaceIdForFesta(const FString& InEntryRaceId, FCommon_FestaBonusChanceData BonusChanceData);
    
};

