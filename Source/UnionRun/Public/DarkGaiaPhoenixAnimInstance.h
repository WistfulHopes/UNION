#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "DarkGaiaPhoenixAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UDarkGaiaPhoenixAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhase1Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhase2Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhase3Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhase3Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPhase3Mirror;
    
public:
    UDarkGaiaPhoenixAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetIsPhase3Move(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPhase3Mirror(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPhase3Attack(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPhase2Move(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPhase1Attack(bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPhase3Move();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPhase3Mirror();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPhase3Attack();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPhase2Move();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPhase1Attack();
    
};

