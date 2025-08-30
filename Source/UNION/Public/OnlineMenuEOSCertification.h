#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "OnlineMenuEOSCertification.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOnlineMenuEOSCertification : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UOnlineMenuEOSCertification(const FObjectInitializer& ObjectInitializer);

};

