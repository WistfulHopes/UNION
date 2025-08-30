#pragma once
#include "CoreMinimal.h"
#include "LobbySequenceBase2.h"
#include "LobbyRankMatchSequence2.generated.h"

UCLASS(Blueprintable)
class UNION_API ALobbyRankMatchSequence2 : public ALobbySequenceBase2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchCancelLimitTime;
    
public:
    ALobbyRankMatchSequence2(const FObjectInitializer& ObjectInitializer);

};

