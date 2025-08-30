#pragma once
#include "CoreMinimal.h"
#include "UnionUIInputWidget.h"
#include "FairPlayPointWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFairPlayPointWidget : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputWaitTime;
    
    UFairPlayPointWidget();

    UFUNCTION(BlueprintCallable)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 InFairPlayPoint, bool bInBan, const FString& InPenaltyEndTime);
    
    UFUNCTION(BlueprintCallable)
    void EndDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableInput();
    
};

