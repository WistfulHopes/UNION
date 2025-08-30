#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "NotificationWindowState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UNotificationWindowState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UNotificationWindowState(const FObjectInitializer& ObjectInitializer);

};

