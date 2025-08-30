#pragma once
#include "CoreMinimal.h"
#include "UserDriverProperty.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserDriverProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    FUserDriverProperty();
};

