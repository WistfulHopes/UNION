#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ResourceHolder.generated.h"

UCLASS(Blueprintable)
class UNION_API UResourceHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
public:
    UResourceHolder();

};

