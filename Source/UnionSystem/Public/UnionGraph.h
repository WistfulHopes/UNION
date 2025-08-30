#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionGraph.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionGraph : public UObject {
    GENERATED_BODY()
public:
    UUnionGraph();

    UFUNCTION(BlueprintCallable)
    bool Dump(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool Deserialize(const TArray<uint8>& Bytes);
    
};

