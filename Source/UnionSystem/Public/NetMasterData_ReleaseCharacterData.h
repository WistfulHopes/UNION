#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 characterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseCharacterData();
};

