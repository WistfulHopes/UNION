#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_DlcTeaserData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_DlcTeaserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dlcTeaserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endTime;
    
    UNIONSYSTEM_API FNetMasterData_DlcTeaserData();
};

