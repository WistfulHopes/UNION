#pragma once
#include "CoreMinimal.h"
#include "PartyResultRacer.h"
#include "PartyResultTeamInfo.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateParty.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateParty : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateParty(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FPartyResultRacer> GetPartyResultRacerAll(UObject* WorldContextObject, FPartyResultTeamInfo& TeamInfo, bool bIsRankSort);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FPartyResultRacer> GetPartyLoadingRacerAll(UObject* WorldContextObject, FPartyResultTeamInfo& TeamInfo);
    
    UFUNCTION(BlueprintCallable)
    static FString FloatTimeToString(float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FString AddFloatTimeToString(float InSeconds);
    
};

