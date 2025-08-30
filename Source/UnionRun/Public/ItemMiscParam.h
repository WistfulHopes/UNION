#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemMiscParam.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UNIONRUN_API UItemMiscParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GravityChangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFallingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMaxBlendSpaceValueThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopilotItemEndInvincibleTime;
    
    UItemMiscParam();

};

