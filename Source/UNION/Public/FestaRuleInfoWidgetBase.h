#pragma once
#include "CoreMinimal.h"
#include "UnionUIInputWidget.h"
#include "FestaRuleInfomation.h"
#include "FestaRuleInfoWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UFestaRuleInfoWidgetBase : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UFestaRuleInfoWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFixedRule(const FFestaRuleInfomation& InFestaFixedRule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceWidgetClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecWidgetOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecWidgetClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanWidgetOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanWidgetClose();
    
};

