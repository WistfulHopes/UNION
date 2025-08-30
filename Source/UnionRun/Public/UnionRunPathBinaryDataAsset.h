#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionRunPathBinaryDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRunPathBinaryDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UUnionRunPathBinaryDataAsset();

};

