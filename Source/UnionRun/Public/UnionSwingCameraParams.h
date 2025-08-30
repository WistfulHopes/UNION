#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwingCameraStagePreset.h"
#include "UnionSwingCameraParams.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionSwingCameraParams : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwingCameraStagePreset AllStageParams[94];
    
public:
    UUnionSwingCameraParams();

};

