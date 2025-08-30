#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MasterDataGetMasterDataResponse.h"
#include "MasterDataGetMasterDataResponse_MstFestaData.h"
#include "MasterDataGetMasterDataResponse_MstFestaTimeSceduleData.h"
#include "MasterDataGetMasterDataResponse_MstGeneralizedParameterData.h"
#include "NetMasterDataManageSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UNetMasterDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnUpdateMasterDataComplete, bool, bWasSuccessful, int32, ErrorCode);
    
    UNetMasterDataManageSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateMasterDataRequest(UNetMasterDataManageSubsystem::FOnUpdateMasterDataComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetupLocalMasterData();
    
    UFUNCTION(BlueprintCallable)
    void SaveLocalMasterData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGetHttpCommandComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable)
    bool HasDifferentialData();
    
    UFUNCTION(BlueprintCallable)
    FMasterDataGetMasterDataResponse GetMasterData();
    
    UFUNCTION(BlueprintCallable)
    bool GetGeneralizedParamData(const FString& KeyName, FMasterDataGetMasterDataResponse_MstGeneralizedParameterData& Out);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentFestaRuleData(FDateTime& FestaStartUTCTime, FDateTime& FestaEndUTCTime, int32& raceRuleId, int32& LoopCount, TArray<FMasterDataGetMasterDataResponse_MstFestaTimeSceduleData>& TimeScheduleDataArray);
    
    UFUNCTION(BlueprintCallable)
    FMasterDataGetMasterDataResponse_MstFestaData GetCurrentFestaData(bool& bResult);
    
};

