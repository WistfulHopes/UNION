#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MariaSwitchNetworkRequestCompletedDelegateDelegate.h"
#include "MariaSwitchNetworkRequestSequence.generated.h"

class UMariaSwitchNetworkRequestSequence;
class UObject;

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaSwitchNetworkRequestSequence : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaSwitchNetworkRequestCompletedDelegate Completed;
    
public:
    UMariaSwitchNetworkRequestSequence();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMariaSwitchNetworkRequestSequence* Run_nn_nifm_SubmitNetworkRequest(UObject* WorldContextObject);
    
};

