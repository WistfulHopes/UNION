#pragma once
#include "CoreMinimal.h"
#include "ItemObjectBase.h"
#include "ItemTripleWhiteBoostObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AItemTripleWhiteBoostObject : public AItemObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitInput;
    
    AItemTripleWhiteBoostObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayUsedItemSound();
    
};

