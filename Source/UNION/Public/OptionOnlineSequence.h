#pragma once
#include "CoreMinimal.h"
#include "ESaveDataStatus.h"
#include "OptionSequenceBase.h"
#include "OptionOnlineSequence.generated.h"

class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionOnlineSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WaitConnectPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ErrorConnectPopup;
    
public:
    UOptionOnlineSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNetworkRecieve(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorDecisionEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSave(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void DestroyErrorWindow(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
};

