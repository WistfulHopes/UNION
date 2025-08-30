#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "OnlineMenuSelectMatch.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOnlineMenuSelectMatch : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UOnlineMenuSelectMatch(const FObjectInitializer& ObjectInitializer);

};

