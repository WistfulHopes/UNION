#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDriverId.h"
#include "MachineAirTrickData.h"
#include "MachineAnimParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UMachineAnimParameterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, FMachineAirTrickData> AirTrickData;
    
    UMachineAnimParameterDataAsset();

    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

