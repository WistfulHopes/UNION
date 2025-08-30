#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ControllerSettings.h"
#include "EKeyConfigRace.h"
#include "EOptionLocalPlayerNumber.h"
#include "OptionSequenceBase.h"
#include "OptionControlSequence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionControlSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeButtonImageEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeButtonImageEvent OnChangeButtonImageEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerSettings> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionLocalPlayerNumber SelectPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> DisplayKeyConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> PrevDisplayKeyConfigs;
    
public:
    UOptionControlSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OpenKeyConfigWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveKeyConfigListItem(EKeyConfigRace Val);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorMoveEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorDecisionEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void OnGageDecisionEvent(uint8 kind, float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnExitKeyConfig(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCellItem(const FText Text);
    
};

