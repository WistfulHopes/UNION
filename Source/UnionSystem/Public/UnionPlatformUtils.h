#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ENXPrivilegeType.h"
#include "EUnionPlatformOnlineRestrictionType.h"
#include "EUnionPlatformPrivilegeType.h"
#include "EUnionPresenceType.h"
#include "SoftwareKeyBoardBootParam.h"
#include "UnionPlatformUtils.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionPlatformUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionPlatformUtils();

    UFUNCTION(BlueprintCallable)
    static void WriteAchievement(const FString& AchievementName, const float& NowValue, const float& MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static void StopRemotePlayExclusionZone();
    
    UFUNCTION(BlueprintCallable)
    static void StartRemotePlayExclusionZone();
    
    UFUNCTION(BlueprintCallable)
    static void StartPresence(const EUnionPresenceType& PresenceType);
    
    UFUNCTION(BlueprintCallable)
    static void SetShareAllOn();
    
    UFUNCTION(BlueprintCallable)
    static void SetShareAllOff();
    
    UFUNCTION(BlueprintCallable)
    static void SetNXOnlinePrivilege(ENXPrivilegeType NXPrivilegeType);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSoftwareKeyboard(const FSoftwareKeyBoardBootParam& PootParam);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserHasPrivilege(EUnionPlatformPrivilegeType UnionPlatformPrivilegeType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserHasNetworkRankingPrivilege();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStartedStreamingInstall();
    
    UFUNCTION(BlueprintCallable)
    static bool IsProhibitedOnlinPlayByParentalControls();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPremiumResolveUiCanceledByUser();
    
    UFUNCTION(BlueprintCallable)
    static bool IsOnlinePrivilegeOn();
    
    UFUNCTION(BlueprintCallable)
    static bool IsNXOnlinePrivilege();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInvertGamepadAcceptAndBackKey();
    
    UFUNCTION(BlueprintCallable)
    static bool IsHighEndPlatform();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPresenceTexts(EUnionPresenceType PresenceType, TArray<FString>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static FText GetPresenceText(EUnionPresenceType PresenceType);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPresenceId(EUnionPresenceType PresenceType);
    
    UFUNCTION(BlueprintCallable)
    static EUnionPlatformOnlineRestrictionType GetOnlinePlayRestrictionType();
    
    UFUNCTION(BlueprintCallable)
    static ENXPrivilegeType GetNXOnlinePrivilege();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGamerTag();
    
    UFUNCTION(BlueprintCallable)
    static FKey GetGamepadBackKey();
    
    UFUNCTION(BlueprintCallable)
    static FKey GetGamepadAcceptKey();
    
};

