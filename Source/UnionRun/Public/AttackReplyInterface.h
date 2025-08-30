#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AttackReply.h"
#include "AttackReplyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAttackReplyInterface : public UInterface {
    GENERATED_BODY()
};

class IAttackReplyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackTimeElapsed(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackSucced(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackPauseStart(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackPauseEnd(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackMissingShot(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackFinishSucceed(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackFinishOverwritten(const FAttackReply& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttackFailed(const FAttackReply& Info);
    
};

