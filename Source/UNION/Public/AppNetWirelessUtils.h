#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WirelessSearchSessionInfo.h"
#include "AppNetWirelessUtils.generated.h"

class ULobbyJoinInfo;
class UObject;

UCLASS(Blueprintable)
class UNION_API UAppNetWirelessUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppNetWirelessUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ConvertJoinInfoToSessionInfo(const UObject* WorldContextObject, const ULobbyJoinInfo* JoinInfo, FWirelessSearchSessionInfo& OutSessionInfo);
    
};

