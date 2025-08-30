#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MariaSteamEncryptedAppTicketCompletedDelegateDelegate.h"
#include "MariaSteamEncryptedAppTicketSequence.generated.h"

class UMariaSteamEncryptedAppTicketSequence;
class UObject;

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaSteamEncryptedAppTicketSequence : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaSteamEncryptedAppTicketCompletedDelegate Completed;
    
public:
    UMariaSteamEncryptedAppTicketSequence();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMariaSteamEncryptedAppTicketSequence* RequestEncryptedAppTicket(UObject* WorldContextObject);
    
};

