#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HttpHelperContext.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UHttpHelperContext : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHttpHelperContext();

};

