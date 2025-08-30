#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "ContentCharaData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentCharaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> DriverIds;
    
    FContentCharaData();
};

