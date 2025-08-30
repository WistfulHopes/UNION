#pragma once
#include "CoreMinimal.h"
#include "CommonLobbyMemberContext.h"
#include "FriendLobbyMemberTodayRecord.h"
#include "CustomMatchLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UCustomMatchLobbyMemberContext : public UCommonLobbyMemberContext {
    GENERATED_BODY()
public:
    UCustomMatchLobbyMemberContext();

    UFUNCTION(BlueprintCallable)
    void SetReady(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SendTodayRecord(const FFriendLobbyMemberTodayRecord InTodayRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTodayRecord(FFriendLobbyMemberTodayRecord& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReady(bool& OutValue) const;
    
};

