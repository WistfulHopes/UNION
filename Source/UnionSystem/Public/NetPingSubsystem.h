#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NetPingSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UNetPingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UNetPingSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUDPQoSAddr(const FString& InAddr);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetICMPAddr(const FString& InAddr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPingMs() const;
    
};

