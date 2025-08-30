#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelectWaitComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelectWaitComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    ULobbyCourseSelectWaitComponent(const FObjectInitializer& ObjectInitializer);

};

