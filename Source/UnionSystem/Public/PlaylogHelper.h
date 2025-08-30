#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CRM_BaseMachine.h"
#include "CRM_Challenge.h"
#include "CRM_Character.h"
#include "CRM_Condition.h"
#include "CRM_Connection.h"
#include "CRM_ConnectionError.h"
#include "CRM_CustomMachineParts.h"
#include "CRM_CustomMachinePartsSpot.h"
#include "CRM_Dlc.h"
#include "CRM_EventFesta.h"
#include "CRM_EventLegend.h"
#include "CRM_FriendMatch.h"
#include "CRM_GadgetPossession.h"
#include "CRM_GadgetUsage.h"
#include "CRM_GameLogin.h"
#include "CRM_Ghost.h"
#include "CRM_Grandprix.h"
#include "CRM_KickStartDelegateDelegate.h"
#include "CRM_LobbyBasic.h"
#include "CRM_LobbyInvite.h"
#include "CRM_LobbyStage.h"
#include "CRM_LobbyStamp.h"
#include "CRM_MatchingRaceStart.h"
#include "CRM_MatchingRegistration.h"
#include "CRM_MatchingResult.h"
#include "CRM_Party.h"
#include "CRM_ProgressGrandprix.h"
#include "CRM_ProgressParty.h"
#include "CRM_ProgressRival.h"
#include "CRM_ProgressRivalTeam.h"
#include "CRM_PushMessageDelegateDelegate.h"
#include "CRM_RaceLog.h"
#include "CRM_RadjCom.h"
#include "CRM_RadjDataAccelOff.h"
#include "CRM_RadjDataAccelOn.h"
#include "CRM_RadjDataAirtrickEnd.h"
#include "CRM_RadjDataAirtrickStart.h"
#include "CRM_RadjDataBackEnd.h"
#include "CRM_RadjDataBackStart.h"
#include "CRM_RadjDataBodyHitAssistWall.h"
#include "CRM_RadjDataBodyHitIrregular.h"
#include "CRM_RadjDataBodyHitMachine.h"
#include "CRM_RadjDataBodyHitObject.h"
#include "CRM_RadjDataBodyHitWall.h"
#include "CRM_RadjDataBoostAbsorbEnd.h"
#include "CRM_RadjDataBoostAbsorbEntry.h"
#include "CRM_RadjDataBoostRingMinus.h"
#include "CRM_RadjDataBoostRingPlus.h"
#include "CRM_RadjDataBoostSlipstreamEnd.h"
#include "CRM_RadjDataBoostSlipstreamStart.h"
#include "CRM_RadjDataBrakeOff.h"
#include "CRM_RadjDataBrakeOn.h"
#include "CRM_RadjDataCheckPoint.h"
#include "CRM_RadjDataDriftOff.h"
#include "CRM_RadjDataDriftOn.h"
#include "CRM_RadjDataEventsOnline.h"
#include "CRM_RadjDataFinish.h"
#include "CRM_RadjDataFrameRateBoostingEnd.h"
#include "CRM_RadjDataFrameRateBoostingStart.h"
#include "CRM_RadjDataGameHighLoadingEnd.h"
#include "CRM_RadjDataGameHighLoadingStart.h"
#include "CRM_RadjDataGuideJumpEnd.h"
#include "CRM_RadjDataGuideJumpStart.h"
#include "CRM_RadjDataItemEnd.h"
#include "CRM_RadjDataItemGet.h"
#include "CRM_RadjDataItemHitMachine.h"
#include "CRM_RadjDataItemStart.h"
#include "CRM_RadjDataJumpEnd.h"
#include "CRM_RadjDataJumpStart.h"
#include "CRM_RadjDataLap.h"
#include "CRM_RadjDataMisalignment.h"
#include "CRM_RadjDataOvertake.h"
#include "CRM_RadjDataOvertaken.h"
#include "CRM_RadjDataPositionsOnline.h"
#include "CRM_RadjDataRankdown.h"
#include "CRM_RadjDataRankup.h"
#include "CRM_RadjDataRearViewOff.h"
#include "CRM_RadjDataRearViewOn.h"
#include "CRM_RadjDataRedStarRing.h"
#include "CRM_RadjDataRespot.h"
#include "CRM_RadjDataShortCutRing.h"
#include "CRM_RadjDataShortWarp.h"
#include "CRM_RadjDataStart.h"
#include "CRM_RadjDataStartDash.h"
#include "CRM_RadjDataSteerDownOff.h"
#include "CRM_RadjDataSteerDownOn.h"
#include "CRM_RadjDataSteerLeftOff.h"
#include "CRM_RadjDataSteerLeftOn.h"
#include "CRM_RadjDataSteerRightOff.h"
#include "CRM_RadjDataSteerRightOn.h"
#include "CRM_RadjDataSteerUpOff.h"
#include "CRM_RadjDataSteerUpOn.h"
#include "CRM_RadjDataWiden.h"
#include "CRM_RadjDataWidened.h"
#include "CRM_RadjLocalPlayer.h"
#include "CRM_RadjMachine.h"
#include "CRM_RadjOnlinePlayer.h"
#include "CRM_RadjRaceSetting.h"
#include "CRM_Sequence.h"
#include "CRM_SubMode.h"
#include "CRM_TimeTrial.h"
#include "CRM_WorldMatch.h"
#include "PlaylogHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UPlaylogHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlaylogHelper();

    UFUNCTION(BlueprintCallable)
    static bool CRM_UnsetSuspended();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_UnsetOutfocus();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_UnsetMessageSendingSuppress();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_UnsetInactive();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_TestSuspended();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_TestOutfocus();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_TestMessageSendingSuppress();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_TestInactive();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_SetSuspended();
    
    UFUNCTION(BlueprintCallable)
    static void CRM_SetRestrictionString(FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void CRM_SetRestrictionInteger(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_SetPushMessageCallback(FCRM_PushMessageDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_SetOutfocus();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_SetMessageSendingSuppress();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_SetInactive();
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutWorldMatch(const FCRM_WorldMatch& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutTimeTrial(const FCRM_TimeTrial& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutSubMode(const FCRM_SubMode& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutSequence(const FCRM_Sequence& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjRaceSetting(const FCRM_RadjRaceSetting& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjOnlinePlayer(const FCRM_RadjOnlinePlayer& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjMachine(const FCRM_RadjMachine& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjLocalPlayer(const FCRM_RadjLocalPlayer& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataWidened(const FCRM_RadjDataWidened& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataWiden(const FCRM_RadjDataWiden& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerUpOn(const FCRM_RadjDataSteerUpOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerUpOff(const FCRM_RadjDataSteerUpOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerRightOn(const FCRM_RadjDataSteerRightOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerRightOff(const FCRM_RadjDataSteerRightOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerLeftOn(const FCRM_RadjDataSteerLeftOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerLeftOff(const FCRM_RadjDataSteerLeftOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerDownOn(const FCRM_RadjDataSteerDownOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataSteerDownOff(const FCRM_RadjDataSteerDownOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataStartDash(const FCRM_RadjDataStartDash& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataStart(const FCRM_RadjDataStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataShortWarp(const FCRM_RadjDataShortWarp& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataShortCutRing(const FCRM_RadjDataShortCutRing& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRespot(const FCRM_RadjDataRespot& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRedStarRing(const FCRM_RadjDataRedStarRing& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRearViewOn(const FCRM_RadjDataRearViewOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRearViewOff(const FCRM_RadjDataRearViewOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRankup(const FCRM_RadjDataRankup& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataRankdown(const FCRM_RadjDataRankdown& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataPositionsOnline(const FCRM_RadjDataPositionsOnline& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataOvertaken(const FCRM_RadjDataOvertaken& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataOvertake(const FCRM_RadjDataOvertake& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataMisalignment(const FCRM_RadjDataMisalignment& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataLap(const FCRM_RadjDataLap& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataJumpStart(const FCRM_RadjDataJumpStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataJumpEnd(const FCRM_RadjDataJumpEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataItemStart(const FCRM_RadjDataItemStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataItemHitMachine(const FCRM_RadjDataItemHitMachine& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataItemGet(const FCRM_RadjDataItemGet& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataItemEnd(const FCRM_RadjDataItemEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataGuideJumpStart(const FCRM_RadjDataGuideJumpStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataGuideJumpEnd(const FCRM_RadjDataGuideJumpEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataGameHighLoadingStart(const FCRM_RadjDataGameHighLoadingStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataGameHighLoadingEnd(const FCRM_RadjDataGameHighLoadingEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataFrameRateBoostingStart(const FCRM_RadjDataFrameRateBoostingStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataFrameRateBoostingEnd(const FCRM_RadjDataFrameRateBoostingEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataFinish(const FCRM_RadjDataFinish& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataEventsOnline(const FCRM_RadjDataEventsOnline& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataDriftOn(const FCRM_RadjDataDriftOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataDriftOff(const FCRM_RadjDataDriftOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataCheckPoint(const FCRM_RadjDataCheckPoint& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBrakeOn(const FCRM_RadjDataBrakeOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBrakeOff(const FCRM_RadjDataBrakeOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostSlipstreamStart(const FCRM_RadjDataBoostSlipstreamStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostSlipstreamEnd(const FCRM_RadjDataBoostSlipstreamEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostRingPlus(const FCRM_RadjDataBoostRingPlus& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostRingMinus(const FCRM_RadjDataBoostRingMinus& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostAbsorbEntry(const FCRM_RadjDataBoostAbsorbEntry& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBoostAbsorbEnd(const FCRM_RadjDataBoostAbsorbEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBodyHitWall(const FCRM_RadjDataBodyHitWall& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBodyHitObject(const FCRM_RadjDataBodyHitObject& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBodyHitMachine(const FCRM_RadjDataBodyHitMachine& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBodyHitIrregular(const FCRM_RadjDataBodyHitIrregular& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBodyHitAssistWall(const FCRM_RadjDataBodyHitAssistWall& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBackStart(const FCRM_RadjDataBackStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataBackEnd(const FCRM_RadjDataBackEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataAirtrickStart(const FCRM_RadjDataAirtrickStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataAirtrickEnd(const FCRM_RadjDataAirtrickEnd& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataAccelOn(const FCRM_RadjDataAccelOn& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjDataAccelOff(const FCRM_RadjDataAccelOff& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRadjCom(const FCRM_RadjCom& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutRaceLog(const FCRM_RaceLog& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutProgressRivalTeam(const FCRM_ProgressRivalTeam& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutProgressRival(const FCRM_ProgressRival& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutProgressParty(const FCRM_ProgressParty& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutProgressGrandprix(const FCRM_ProgressGrandprix& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutParty(const FCRM_Party& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutMatchingResult(const FCRM_MatchingResult& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutMatchingRegistration(const FCRM_MatchingRegistration& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutMatchingRaceStart(const FCRM_MatchingRaceStart& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutLobbyStamp(const FCRM_LobbyStamp& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutLobbyStage(const FCRM_LobbyStage& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutLobbyInvite(const FCRM_LobbyInvite& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutLobbyBasic(const FCRM_LobbyBasic& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutGrandprix(const FCRM_Grandprix& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutGhost(const FCRM_Ghost& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutGameLogin(const FCRM_GameLogin& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutGadgetUsage(const FCRM_GadgetUsage& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutGadgetPossession(const FCRM_GadgetPossession& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutFriendMatch(const FCRM_FriendMatch& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutEventLegend(const FCRM_EventLegend& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutEventFesta(const FCRM_EventFesta& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutDlc(const FCRM_Dlc& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutCustomMachinePartsSpot(const FCRM_CustomMachinePartsSpot& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutCustomMachineParts(const FCRM_CustomMachineParts& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutConnectionError(const FCRM_ConnectionError& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutConnection(const FCRM_Connection& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutCondition(const FCRM_Condition& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutCharacter(const FCRM_Character& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutChallenge(const FCRM_Challenge& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool CRM_PutBaseMachine(const FCRM_BaseMachine& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> CRM_MakeRandomIntegerArray(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> CRM_MakeRandomFloatArray(int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static void CRM_KickStart(FCRM_KickStartDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CRM_GetUserInfoString();
    
};

