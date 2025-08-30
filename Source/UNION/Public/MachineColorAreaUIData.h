#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMachineColorAreaUIId.h"
#include "MachineColorAreaUIData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineColorAreaUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineColorAreaUIId ID;
    
    FMachineColorAreaUIData();
};

