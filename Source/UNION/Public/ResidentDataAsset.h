#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResidentDataAsset.generated.h"

class UPrimaryDataAssetShelf;

UCLASS(Blueprintable)
class UNION_API UResidentDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAssetShelf* GameResidentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAssetShelf* MenuResidentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAssetShelf* RaceResidentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryDataAssetShelf* PreloadRaceDataAsset;
    
    UResidentDataAsset();

};

