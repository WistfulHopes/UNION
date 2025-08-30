#pragma once
#include "CoreMinimal.h"
#include "MachineColorAreaUIData.h"
#include "MachineColorAreaUIDataGroup.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineColorAreaUIDataGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIData Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIData Sub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineColorAreaUIData Accent;
    
    FMachineColorAreaUIDataGroup();
};

