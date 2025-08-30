#pragma once
#include "CoreMinimal.h"
#include "ItemAnimInstance.h"
#include "ItemDarkChaoAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNIONRUN_API UItemDarkChaoAnimInstance : public UItemAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSteal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrowHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrowMissFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrowMissBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAnimController;
    
public:
    UItemDarkChaoAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetThrowAnimController(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUse(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrowMissFall(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrowMissBound(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrowHit(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrow(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSteal(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsIdle(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGift(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowAnimController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsThrowMissFall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsThrowMissBound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsThrowHit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsThrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSteal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsGift();
    
};

