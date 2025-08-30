#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoldItemPoolAccessor.h"
#include "HoldItemPool.generated.h"

class AHoldItem;

UCLASS(Blueprintable)
class UNION_API UHoldItemPool : public UObject, public IHoldItemPoolAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HoldItemSTMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HoldItemSKMClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* HoldItemVATClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHoldItem*> PooledItem;
    
public:
    UHoldItemPool();


    // Fix for true pure virtual functions not being implemented
};

