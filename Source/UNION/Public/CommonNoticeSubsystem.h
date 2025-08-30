#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CommonNoticeSubsystem.generated.h"

class UChallengeNoticeWindow;
class UStreamingInstallNotice;

UCLASS(Blueprintable)
class UNION_API UCommonNoticeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnDeviceDisconnected);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeNoticeWindow* ChallengeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStreamingInstallNotice* StreamingInstallNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStreamingInstallNotice* DeviceDisconnectedNotice;
    
public:
    UCommonNoticeSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnDeviceConnectedEvent(bool IsConnected);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddChallengeNotice(int32 ChallengeId, float Time);
    
};

