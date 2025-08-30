#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDriverId.h"
#include "RaceCameraParam.h"
#include "RivalCameraCustomParam.h"
#include "RivalCameraDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API URivalCameraDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpCompTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpEaseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceCameraParam DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, FRivalCameraCustomParam> CustomParam;
    
    URivalCameraDataAsset();

};

