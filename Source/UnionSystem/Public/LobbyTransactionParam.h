#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyTransactionParam.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULobbyTransactionParam : public UObject {
    GENERATED_BODY()
public:
    ULobbyTransactionParam();

    UFUNCTION(BlueprintCallable)
    void SetPublic(bool bInPublic);
    
    UFUNCTION(BlueprintCallable)
    void SetPassword(const FString& InPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bInLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHostMigration(bool bInEnableHostMigration);
    
    UFUNCTION(BlueprintCallable)
    void SetCreateDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetCapacity(int64 InCapacity);
    
    UFUNCTION(BlueprintCallable)
    void AddDeleteAttribute(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributeString(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributeInt64(const FString& Key, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributeFloat(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributeBool(const FString& Key, bool Value);
    
};

