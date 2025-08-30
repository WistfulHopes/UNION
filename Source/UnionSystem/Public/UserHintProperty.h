#pragma once
#include "CoreMinimal.h"
#include "UserHintProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserHintProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FUserHintProperty();
};

