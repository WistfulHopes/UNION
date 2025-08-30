#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameTimeTrial.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameTimeTrial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicSpeedPlayCount[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicSpeedTimeRecord[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicSpeedARankTime[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicSpeedARankFlag[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicSpeedCount[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicSpeedTimeRecord[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicSpeedARankTime[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicSpeedARankFlag[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GhostCount[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SonicSpeedARankCount[94];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuperSonicSpeedARankCount[94];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameTimeTrial();
};

