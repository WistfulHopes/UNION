#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFriendListCategory.h"
#include "EFriendListCommandType.h"
#include "EFriendListType.h"
#include "FriendListConfirmWidgetData.h"
#include "FriendListContentsWidgetData.h"
#include "FriendListOnlineSettingData.h"
#include "FriendListResultWidgetData.h"
#include "FriendListSubMenuWidgetData.h"
#include "FriendListWidgetDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UFriendListWidgetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendListCategory, FFriendListContentsWidgetData> ContentsWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendListCommandType, FText> SubMenuTextData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendListType, FFriendListSubMenuWidgetData> SubMenuWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendListCommandType, FFriendListConfirmWidgetData> ConfirmWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFriendListCommandType, FFriendListResultWidgetData> ResultWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendListOnlineSettingData> OnlineSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ErrorMessageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> PopupWindowTextData;
    
    UFriendListWidgetDataAsset();

};

