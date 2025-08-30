#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameHttpRequestOption.h"
#include "HttpReceivedDelegateDelegate.h"
#include "ServerList.h"
#include "GameHttpSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UGameHttpSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FServerList ServerList;
    
public:
    UGameHttpSubsystem();

    UFUNCTION(BlueprintCallable)
    void SendToServerRawCallbacked(const FGameHttpRequestOption& Option, const FString& ApiName, const FString& Data, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    int32 SendToServerRaw(const FGameHttpRequestOption& Option, const FString& ApiName, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    bool ReceiveFromServerRaw(int32 Handle, FString& OutData, bool& OutError);
    
};

