#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "ReactionDirName.generated.h"

USTRUCT(BlueprintType)
struct FReactionDirName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DirName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UNIONRUN_API FReactionDirName();
};

