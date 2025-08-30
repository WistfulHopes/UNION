#pragma once
#include "CoreMinimal.h"
#include "EDroneCurrentLap.h"
#include "EDroneDismissType.h"
#include "EDroneRemainDistance.h"
#include "EDroneShowType.h"
#include "CallDroneInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FCallDroneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneShowType ShowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneCurrentLap CurrentLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneRemainDistance Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneDismissType DismissType;
    
    FCallDroneInfo();
};

