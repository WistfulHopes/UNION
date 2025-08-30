#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECrossplayPlatform.h"
#include "PlayerNameInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONSYSTEM_API UPlayerNameInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONSYSTEM_API IPlayerNameInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRivalIF(bool IsRival, bool IsPowerRival);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReaderIF(bool IsReader);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRankIF(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerIndexIF(bool IsLocalPlayer, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnlineIF(bool IsRival);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNameIF(const FText& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGroupIndexIF(bool IsGroup, int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCrossPlayIconIF(ECrossplayPlatform CrossplayType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCOMIF(bool IsCom);
    
};

