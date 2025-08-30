#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Common_FestaData.h"
#include "Common_FestaPointData.h"
#include "ResultSequenceUtility.generated.h"

UCLASS(Blueprintable)
class UNION_API UResultSequenceUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UResultSequenceUtility();

    UFUNCTION(BlueprintCallable)
    static void SetResultFestaData(bool& bSuccess, FCommon_FestaData InUserResultPointInfo, FCommon_FestaPointData InUserResultPointDetail);
    
    UFUNCTION(BlueprintCallable)
    static void GetResultFestaData(FCommon_FestaData& OutUserResultPointInfo, FCommon_FestaPointData& OutUserResultPointDetail);
    
};

