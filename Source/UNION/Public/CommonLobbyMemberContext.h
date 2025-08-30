#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "ELobbyInviteType.h"
#include "EMachineId.h"
#include "LobbyMemberContextBase.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "UserMachineCustomizeData.h"
#include "UserStickerData.h"
#include "ECommonLobbyMemberState.h"
#include "GadgetPlateUIData.h"
#include "UsageCountChara.h"
#include "CommonLobbyMemberContext.generated.h"

UCLASS(Blueprintable)
class UNION_API UCommonLobbyMemberContext : public ULobbyMemberContextBase {
    GENERATED_BODY()
public:
    UCommonLobbyMemberContext();

    UFUNCTION(BlueprintCallable)
    void SetUsageCountByMachineType(TArray<int32> UsageCountArray);
    
    UFUNCTION(BlueprintCallable)
    void SetUsageCountByChara(TArray<FUsageCountChara> UsageCountArray);
    
    UFUNCTION(BlueprintCallable)
    void SetRateRank(int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerName(const FString& RacerName);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerGadgetData(const FGadgetPlateUIData& GadgetPlateData);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerGadget(const TArray<EGadgetId>& Gadgets);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerDriverAndMachineDataEx(EDriverId DriverId, int32 MachineId, const FUserMachineCustomizeData& CustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerDriverAndMachineData(EDriverId DriverId, int32 MachineId, EMachineId FrontPartsId, EMachineId RearPartsId, EMachineId TirePartsId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformUserId(const FString& PlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatformType(EAppSupportedPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    void SetPlatform(const FString& Platform);
    
    UFUNCTION(BlueprintCallable)
    void SetLikeCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstRankFlag(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDegreeId(int32 degreeId);
    
    UFUNCTION(BlueprintCallable)
    void SetCommonMemberState(ECommonLobbyMemberState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SendStamp(int32 StampId);
    
    UFUNCTION(BlueprintCallable)
    void SendSelectedCourseId_Callback(int32 courseId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SendSelectedCourseId(int32 courseId);
    
    UFUNCTION(BlueprintCallable)
    void SendResultSaveDone();
    
    UFUNCTION(BlueprintCallable)
    void SendLikeTo(ULobbyMemberContextBase* Member);
    
    UFUNCTION(BlueprintCallable)
    void SendHorn();
    
    UFUNCTION(BlueprintCallable)
    void SendEntryRaceId(const FString& InEntryRaceId);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteWithError(bool bSuccessful, const FLobbyOperationResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsWaitingMembersTimeout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsRaceHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInLobby() const;
    
    UFUNCTION(BlueprintCallable)
    void GetUsageCountByMachineType(TArray<int32>& OutDataArray);
    
    UFUNCTION(BlueprintCallable)
    void GetUsageCountByChara(TArray<FUsageCountChara>& OutDataArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStickerCustomizeData(const int32 Key, TArray<FUserStickerData>& OutStickerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedCourseId(int32& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRateRank(int32& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRacerName(FText& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRacerMachineData(int32& OutMachineId, FUserMachineCustomizeData& OutCustomizeData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetRacerGadgetData(FGadgetPlateUIData& OutGadgetPlateData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetRacerGadget(TArray<EGadgetId>& OutGadgets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRacerDriverId(EDriverId& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlatformUserId(FString& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlatformType(EAppSupportedPlatform& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlatform(FText& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ELobbyInviteType GetLobbyInviteType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLikeCount(int32& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetFirstRankFlag(bool& bOutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDegreeId(int32& OutResult) const;
    
    UFUNCTION(BlueprintCallable)
    ECommonLobbyMemberState GetCommonMemberState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonLobbyMemberState GetCachedCommonMemberState() const;
    
};

