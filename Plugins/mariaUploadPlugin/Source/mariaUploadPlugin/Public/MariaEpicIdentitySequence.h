#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMariaEpicLoginType.h"
#include "MariaEpicIdentityCompletedDelegateDelegate.h"
#include "MariaEpicIdentitySequence.generated.h"

class APlayerController;
class UMariaEpicIdentitySequence;
class UObject;

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaEpicIdentitySequence : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaEpicIdentityCompletedDelegate Completed;
    
public:
    UMariaEpicIdentitySequence();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMariaEpicIdentitySequence* LogoutEOS(UObject* WorldContextObject, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMariaEpicIdentitySequence* LoginEOS(UObject* WorldContextObject, APlayerController* PlayerController, EMariaEpicLoginType LoginType, const FString& ID, const FString& Token);
    
};

