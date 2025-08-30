#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ELocalStorageStatus.h"
#include "LocalStorageSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULocalStorageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FSaveComplete, ELocalStorageStatus, Status);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLoadComplete, ELocalStorageStatus, Status);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveComplete OnSaveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadComplete OnLoadComplete;
    
    ULocalStorageSubsystem();

    UFUNCTION(BlueprintCallable)
    void SaveAsync(const FString& Filename, TArray<uint8>& InBuffer);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsync(const FString& Filename, TArray<uint8>& OutBuffer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable)
    bool Exists(const FString& Filename, ELocalStorageStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void Delete(const FString& Filename, ELocalStorageStatus& OutStatus);
    
};

