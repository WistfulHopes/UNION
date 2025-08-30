#pragma once
#include "CoreMinimal.h"
#include "UserPartsProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserPartsProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FUserPartsProperty();
};

