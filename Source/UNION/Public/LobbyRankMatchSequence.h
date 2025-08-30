#pragma once
#include "CoreMinimal.h"
#include "LobbySequenceBase.h"
#include "LobbyRankMatchSequence.generated.h"

UCLASS(Blueprintable)
class UNION_API ALobbyRankMatchSequence : public ALobbySequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchCancelLimitTime;
    
public:
    ALobbyRankMatchSequence(const FObjectInitializer& ObjectInitializer);

};

