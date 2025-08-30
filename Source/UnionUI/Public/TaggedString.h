#pragma once
#include "CoreMinimal.h"
#include "TaggedString.generated.h"

USTRUCT(BlueprintType)
struct UNIONUI_API FTaggedString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;
    
    FTaggedString();
};

