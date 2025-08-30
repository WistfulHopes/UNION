#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SimpleBinaryAsset.generated.h"

UCLASS(Blueprintable)
class UNIONLIB_API USimpleBinaryAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    USimpleBinaryAsset();

};

