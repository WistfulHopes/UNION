#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MariaInitializeAuthCompletedDelegateDelegate.h"
#include "MariaInitializeAuthSeqIdCallbackDelegate.h"
#include "MariaInitializeAuthSeqUrlCallbackDelegate.h"
#include "MariaInitializeAuthSequence.generated.h"

class UMariaInitializeAuthSequence;
class UObject;

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaInitializeAuthSequence : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaInitializeAuthCompletedDelegate CanStartLogging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaInitializeAuthCompletedDelegate Completed;
    
public:
    UMariaInitializeAuthSequence();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMariaInitializeAuthSequence* RunInitializeAuthSeq(UObject* WorldContextObject, int32 Phase, const FMariaInitializeAuthSeqUrlCallback& UrlCallback, const FMariaInitializeAuthSeqIdCallback& IdCallback);
    
};

