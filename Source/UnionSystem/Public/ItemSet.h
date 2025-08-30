#pragma once
#include "CoreMinimal.h"
#include "EItemId.h"
#include "ItemSet.generated.h"

USTRUCT(BlueprintType)
struct FItemSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId FirstItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId SecondItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId ThirdItemId;
    
    UNIONSYSTEM_API FItemSet();
};

