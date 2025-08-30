#pragma once
#include "CoreMinimal.h"
#include "RacerDamagePropertyChangeData.h"
#include "RacerDamagePropertyChangeGroupData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerDamagePropertyChangeGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerDamagePropertyChangeData NormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerDamagePropertyChangeData HighSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerDamagePropertyChangeData SonicSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerDamagePropertyChangeData SuperSonicSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwriteDuration;
    
    FRacerDamagePropertyChangeGroupData();
};

