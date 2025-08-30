#pragma once
#include "CoreMinimal.h"
#include "UnionUIInputWidget.h"
#include "GadgetPlateRankUpWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetPlateRankUpWindow : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAddFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAddVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeAddTime;
    
    UGadgetPlateRankUpWindow();

    UFUNCTION(BlueprintCallable)
    void CalculateGauge(float InDeltaTime);
    
};

