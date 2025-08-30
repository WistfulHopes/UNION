#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RewardGetWindowParam.h"
#include "NoticeMasterDataHelper.generated.h"

class UNetMasterDataManageSubsystem;

UCLASS(Blueprintable)
class UNION_API UNoticeMasterDataHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNoticeMasterDataHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFreeContentsReward(UNetMasterDataManageSubsystem* Subsystem, TArray<FRewardGetWindowParam>& RewardArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActiveFreeContentNoticeInfo(UNetMasterDataManageSubsystem* Subsystem, FString& noticeId, FDateTime& releaseTime);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActiveDLCNoticeInfo(UNetMasterDataManageSubsystem* Subsystem, FString& noticeId, FDateTime& DLCReleaseTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFreeContentNotice(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckFestaNotice(UNetMasterDataManageSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDLCNotice(UNetMasterDataManageSubsystem* Subsystem);
    
};

