#pragma once
#include "CoreMinimal.h"
#include "SaveDataHeader.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FSaveDataHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _RomVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _SaveCount;
    
    FSaveDataHeader();
};

