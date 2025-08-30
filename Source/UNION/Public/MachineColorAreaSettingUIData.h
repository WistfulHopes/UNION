#pragma once
#include "CoreMinimal.h"
#include "MachineColorAreaUIData.h"
#include "MachineColorAreaUIDataGroup.h"
#include "MachineColorAreaSettingUIData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineColorAreaSettingUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIDataGroup Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIDataGroup Tire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIDataGroup Cockpit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIData Glow;
    
    FMachineColorAreaSettingUIData();
};

