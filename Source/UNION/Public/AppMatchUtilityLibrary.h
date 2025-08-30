#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MCEventData.h"
#include "AppMatchUtilityLibrary.generated.h"

class UCommonLobbyContext;
class UCommonLobbyMemberContext;
class ULobbyContextBase;
class UObject;

UCLASS(Blueprintable)
class UNION_API UAppMatchUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppMatchUtilityLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupOnlineUserRacerConfig(UObject* WorldContextObject, int32 OnlineIndex, UCommonLobbyMemberContext* MemberContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupOnlinePeerRaceConfig(UObject* WorldContextObject, UCommonLobbyContext* LobbyContext);
    
    UFUNCTION(BlueprintCallable)
    static FMCEventData GetMCEventData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FillCOMUser(const UObject* WorldContextObject, ULobbyContextBase* LobbyContext);
    
};

