#pragma once
#include "CoreMinimal.h"
#include "ELockType.h"
#include "UserItemProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserItemProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELockType LockType;
    
    FUserItemProperty();
};

