#pragma once
#include "CoreMinimal.h"
#include "EHoldItemSTMSequence.h"
#include "HoldItem.h"
#include "HoldItemSTM.generated.h"

class UCurveVector;

UCLASS(Blueprintable)
class UNION_API AHoldItemSTM : public AHoldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveVector*> CurveAssets;
    
    AHoldItemSTM(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSequence(EHoldItemSTMSequence Sequence);
    
};

