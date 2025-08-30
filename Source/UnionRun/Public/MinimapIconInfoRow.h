#pragma once
#include "CoreMinimal.h"
#include "MinimapIconInfoRow.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FMinimapIconInfoRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconTexturePath;
    
    FMinimapIconInfoRow();
};

