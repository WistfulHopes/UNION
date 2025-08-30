#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDriverId.h"
#include "CharaMachineSelectSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UCharaMachineSelectSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> _SelectableDriverIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _HoverboardZLocationAdjust;
    
    UCharaMachineSelectSettingDataAsset();

};

