#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionComPathBinaryDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionComPathBinaryDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UUnionComPathBinaryDataAsset();

};

