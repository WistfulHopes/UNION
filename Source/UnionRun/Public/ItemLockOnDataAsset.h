#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LockOnParamMachineForm.h"
#include "ItemLockOnDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UItemLockOnDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterShotUICoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckAheadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapLockOnToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnParamMachineForm LockOnParam_Car;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnParamMachineForm LockOnParam_Boat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnParamMachineForm LockOnParam_Plane;
    
    UItemLockOnDataAsset();

};

