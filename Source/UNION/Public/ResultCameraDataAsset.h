#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDriverId.h"
#include "EResultCameraProductionType.h"
#include "RaceCameraCustomParam.h"
#include "RaceCameraMapElement.h"
#include "ResultCameraDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UResultCameraDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpCompTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartUpEaseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnabledRotationRag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProdCompTimeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProductionFlowRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EResultCameraProductionType> ProductionFlowAllay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EResultCameraProductionType, FRaceCameraMapElement> DefaultProductionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, FRaceCameraCustomParam> DriverParam;
    
    UResultCameraDataAsset();

    UFUNCTION(BlueprintCallable)
    void RenameDefaultProdMap();
    
};

