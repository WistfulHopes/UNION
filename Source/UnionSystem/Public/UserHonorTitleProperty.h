#pragma once
#include "CoreMinimal.h"
#include "UserHonorTitleProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserHonorTitleProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FUserHonorTitleProperty();
};

