#pragma once
#include "CoreMinimal.h"
#include "EMachineCustomizeTabID.h"
#include "MachineCustomizeTabParameter.generated.h"

USTRUCT(BlueprintType)
struct FMachineCustomizeTabParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineCustomizeTabID TabID;
    
    UNION_API FMachineCustomizeTabParameter();
};

