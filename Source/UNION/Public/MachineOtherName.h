#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "MachineOtherName.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineOtherName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineId RearPartsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FMachineOtherName();
};

