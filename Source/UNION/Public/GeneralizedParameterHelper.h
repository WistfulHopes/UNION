#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeneralizedParameterHelper.generated.h"

class UNetMasterDataManageSubsystem;

UCLASS(Blueprintable)
class UNION_API UGeneralizedParameterHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeneralizedParameterHelper();

    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableItemsRankMatch(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefItemIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableItemsLegendCompe(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefItemIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableItemsFesta(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefItemIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableGadgetsRankMatch(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableGadgetsLegendCompe(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceDisableGadgetsFesta(UNetMasterDataManageSubsystem* Subsystem, TArray<int32>& RefGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    static bool GetP2PRaceUnstableTimeMilliSeconds(UNetMasterDataManageSubsystem* Subsystem, int32& UnstableTimeMilliSeconds);
    
    UFUNCTION(BlueprintCallable)
    static bool GetP2PRaceTimeOutMilliSeconds(UNetMasterDataManageSubsystem* Subsystem, int32& TimeOutMilliSeconds);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendListRequestIntervalMinutes(UNetMasterDataManageSubsystem* Subsystem, int32& IntervalMinutes);
    
};

