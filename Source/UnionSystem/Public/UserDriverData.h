#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UserDriverProperty.h"
#include "UserDriverData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserDriverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, FUserDriverProperty> UserDriverList;
    
    FUserDriverData();
};

