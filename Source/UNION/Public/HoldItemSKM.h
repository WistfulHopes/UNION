#pragma once
#include "CoreMinimal.h"
#include "HoldItem.h"
#include "HoldItemSKM.generated.h"

class UHoldItemBlackBombComponent;

UCLASS(Blueprintable)
class UNION_API AHoldItemSKM : public AHoldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHoldItemBlackBombComponent* HoldItemBlackBombComponent;
    
    AHoldItemSKM(const FObjectInitializer& ObjectInitializer);

};

