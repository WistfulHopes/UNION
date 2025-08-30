#pragma once
#include "CoreMinimal.h"
#include "ItemObjectBase.h"
#include "ItemWhiteBoostObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AItemWhiteBoostObject : public AItemObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IntervalTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitInput;
    
    AItemWhiteBoostObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayUsedItemSound();
    
};

