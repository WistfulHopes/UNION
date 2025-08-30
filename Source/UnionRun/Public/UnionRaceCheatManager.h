#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "UnionRaceCheatManager.generated.h"

class UCheatItem;
class UCheatPerformance;
class UCheatRaceCommon;

UCLASS(Blueprintable)
class UUnionRaceCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCheatPerformance* CheatPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCheatItem* CheatItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCheatRaceCommon* CheatRaceCommon;
    
public:
    UUnionRaceCheatManager();

};

