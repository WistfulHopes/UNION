#pragma once
#include "CoreMinimal.h"
#include "AppGadgetCustomizeData.generated.h"

USTRUCT(BlueprintType)
struct FAppGadgetCustomizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastSelectedGadgetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRentalGadgetPlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFestaSpecialRuleContinuous;
    
    UNION_API FAppGadgetCustomizeData();
};

