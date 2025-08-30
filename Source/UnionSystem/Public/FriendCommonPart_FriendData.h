#pragma once
#include "CoreMinimal.h"
#include "Common_DegreeData.h"
#include "Common_HistoryData.h"
#include "Common_MachineData.h"
#include "Common_PlayState.h"
#include "Common_RatingData.h"
#include "Common_UserBaseData.h"
#include "Common_UserNetworkSettings.h"
#include "FriendCommonPart_FriendFestaData.h"
#include "FriendCommonPart_FriendData.generated.h"

USTRUCT(BlueprintType)
struct FFriendCommonPart_FriendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_UserBaseData userBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_UserNetworkSettings network;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_PlayState PlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_RatingData rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFriendCommonPart_FriendFestaData festa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_DegreeData degree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_MachineData machine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_HistoryData history;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isManualBan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UNIONSYSTEM_API FFriendCommonPart_FriendData();
};

