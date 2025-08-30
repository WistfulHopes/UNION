#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "EOSNetDriver.generated.h"

class UEOSNetConnection;

UCLASS(Blueprintable, NonTransient, Config=OnlineSubsystemRedpointEOS)
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEOSNetConnection*> PendingConnectionClose;
    
public:
    UEOSNetDriver();

};

