#pragma once
#include "CoreMinimal.h"
#include "EUnionUIFadeDirection.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateDriverGetting.generated.h"

class URewardGetWindow;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateDriverGetting : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URewardGetWindow> _RewardGetWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URewardGetWindow* _RewardGetWindow;
    
public:
    URaceSequenceStateDriverGetting(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEnd(EUnionUIFadeDirection Direction);
    
};

