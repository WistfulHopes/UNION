#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemInfoVisible.h"
#include "ERaceCameraType.h"
#include "ETeamRankAndMap.h"
#include "CellIndicatorRaceData.generated.h"

UCLASS(Blueprintable)
class UNION_API UCellIndicatorRaceData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERaceCameraType, FText> CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> Fps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETeamRankAndMap, FText> TeamRankVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemInfoVisible, FText> ItemInfoVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> RaceSerif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> DriftAndTrick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> gadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> RingAndMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> RaceRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> ItemSlot;
    
    UCellIndicatorRaceData();

};

