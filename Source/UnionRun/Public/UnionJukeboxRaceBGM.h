#pragma once
#include "CoreMinimal.h"
#include "UnionJukeboxRaceBGMLapInfo.h"
#include "UnionJukeboxRaceBGM.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionJukeboxRaceBGM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionJukeboxRaceBGMLapInfo> LapInfo;
    
    FUnionJukeboxRaceBGM();
};

