#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnGameMatchmakingCompleteDelegate.h"
#include "Templates/SubclassOf.h"
#include "MatchmakingSubsystem.generated.h"

class UMatchmakingRequestContext;

UCLASS(Blueprintable, Config=UnionNetwork)
class UNIONSYSTEM_API UMatchmakingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatchmakingRequestContext* MatchmakingRequestContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameMatchmakingComplete OnMatchmakingComplete;
    
public:
    UMatchmakingSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(int32 LocalUserNum, UMatchmakingRequestContext* NewContext, FOnGameMatchmakingComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingCompleteDelegate(FOnGameMatchmakingComplete Delegate);
    
    UFUNCTION(BlueprintCallable)
    UMatchmakingRequestContext* GetCurrentMatchmakingContext(bool& bIsExists);
    
    UFUNCTION(BlueprintCallable)
    void EndMatchmaking(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    UMatchmakingRequestContext* CreateMatchmakingContext(TSubclassOf<UMatchmakingRequestContext> MatchmakingContextClass);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDelegates();
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking(int32 LocalUserNum);
    
};

