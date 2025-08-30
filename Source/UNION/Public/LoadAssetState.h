#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceStateBase.h"
#include "LoadAssetState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULoadAssetState : public UMenuSequenceStateBase {
    GENERATED_BODY()
public:
    ULoadAssetState(const FObjectInitializer& ObjectInitializer);

};

