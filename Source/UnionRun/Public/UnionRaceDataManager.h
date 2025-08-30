#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionRaceDataManager.generated.h"

class UUnionRacers;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacers* AppRacers;
    
public:
    UUnionRaceDataManager();

};

