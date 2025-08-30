#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_ReleaseStickerData.generated.h"

USTRUCT(BlueprintType)
struct FNetMasterData_ReleaseStickerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stickerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString releaseTime;
    
    UNIONSYSTEM_API FNetMasterData_ReleaseStickerData();
};

