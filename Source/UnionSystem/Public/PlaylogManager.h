#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MariaAsyncCompletedDelegateDelegate.h"
#include "PlaylogManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UPlaylogManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CrmWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMariaAsyncCompletedDelegate SetupCompleteDelegate;
    
public:
    UPlaylogManager();

private:
    UFUNCTION(BlueprintCallable)
    void SteamOnSetupComplete(bool Success);
    
    UFUNCTION(BlueprintCallable)
    void OnUrl(const FString& RegistrationURL);
    
    UFUNCTION(BlueprintCallable)
    void OnId(const FString& AccountID);
    
};

