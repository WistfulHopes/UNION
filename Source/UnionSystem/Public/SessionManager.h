#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EResponseCodeAbstract.h"
#include "StartLoginDelegateDelegate.h"
#include "SessionManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API USessionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USessionManager();

    UFUNCTION(BlueprintCallable)
    void StartLogin(FStartLoginDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    bool GetUserID(FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    bool GetSwitchOnlineCode(int32& switchOnlineCode);
    
    UFUNCTION(BlueprintCallable)
    EResponseCodeAbstract GetResponseCodeAbstract();
    
    UFUNCTION(BlueprintCallable)
    bool GetRegionCode(FString& regionCode);
    
    UFUNCTION(BlueprintCallable)
    bool GetPenaltyEndTime(FString& endTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoginComplete();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBan(bool& bOutIsBan);
    
    UFUNCTION(BlueprintCallable)
    bool GetFairPlayPoint(int32& OutFairPlayPoint);
    
    UFUNCTION(BlueprintCallable)
    bool GetExternalAddressRegionName(FString& AddressRegionName);
    
    UFUNCTION(BlueprintCallable)
    bool GetDisplayCode(FString& displayCode);
    
};

