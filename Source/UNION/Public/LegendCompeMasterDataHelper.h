#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LegendCompeMasterDataHelper.generated.h"

class UNetMasterDataManageSubsystem;

UCLASS(Blueprintable)
class UNION_API ULegendCompeMasterDataHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULegendCompeMasterDataHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeStartUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeStartTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeRankingCalcEndUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeRankingCalcEndTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeNoticeStartUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeNoticeStartTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLegendCompeId(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeEndUTCTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetLegendCompeEndTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckLegendCompeStartNoticeDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckLegendCompeStartDateTimeFromParam(UNetMasterDataManageSubsystem* Subsystem, const FDateTime& CheckUtcTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckLegendCompeStartDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckLegendCompeRankingCalcDateTime(UNetMasterDataManageSubsystem* Subsystem);
    
};

