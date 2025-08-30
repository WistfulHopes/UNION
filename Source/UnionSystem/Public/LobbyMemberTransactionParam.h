#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyMemberTransactionParam.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULobbyMemberTransactionParam : public UObject {
    GENERATED_BODY()
public:
    ULobbyMemberTransactionParam();

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

