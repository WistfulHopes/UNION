#pragma once
#include "CoreMinimal.h"
#include "GadgetUIData2.h"
#include "GadgetSelectWindowData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FGadgetSelectWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGadgetUIData2> GadgetUIDataList;
    
    FGadgetSelectWindowData();
};

