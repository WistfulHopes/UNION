#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUnionUIFadeDirection.h"
#include "GarbageCollectionInvoker.generated.h"

UCLASS(Blueprintable)
class UNION_API UGarbageCollectionInvoker : public UObject {
    GENERATED_BODY()
public:
    UGarbageCollectionInvoker();

private:
    UFUNCTION(BlueprintCallable)
    void OnFadeFinished(EUnionUIFadeDirection FadeDirection);
    
};

