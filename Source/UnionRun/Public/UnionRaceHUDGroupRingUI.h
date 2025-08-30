#pragma once
#include "CoreMinimal.h"
#include "UnionRaceHUDGroupRingUI.generated.h"

class URaceUISubGroupRing;

USTRUCT(BlueprintType)
struct FUnionRaceHUDGroupRingUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubGroupRing*> RingCountUI;
    
    UNIONRUN_API FUnionRaceHUDGroupRingUI();
};

