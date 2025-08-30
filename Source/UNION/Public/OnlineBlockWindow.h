#pragma once
#include "CoreMinimal.h"
#include "Common_UserSearchData.h"
#include "EBlockPlayerErrorCode.h"
#include "EResponseCodeAbstract.h"
#include "UnionUISceneBase.h"
#include "EPlayerInfoSubWindowBtnType.h"
#include "EPlayerInfoSubWindowErrorType.h"
#include "PlayerInfoDecideSubWindowDelegateDelegate.h"
#include "OnlineBlockWindow.generated.h"

class UCommonMessageBar;
class USoundAtomCue;
class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOnlineBlockWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetProductId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectBlockWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BlockUserPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> PlayerDetailSubWindowButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMessageBar* MessageBarSceneObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInfoDecideSubWindowDelegate OnPlayerInfoDecidePopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingPopUpWindow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowBlockWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> KickTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FriendRequesrTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> BlockTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerInfoSubWindowErrorType, FText> ErrorWindowTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecideSadQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlatform;
    
public:
    UOnlineBlockWindow();

private:
    UFUNCTION(BlueprintCallable)
    void OnUserSearchPlatformComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    void OnUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnShowPfProfileErrorWindowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideResultPopUpEvent(EPlayerInfoSubWindowBtnType InBtnType, bool bInIsError);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideCheckPopup(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecideBlockPopup(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeBlockWindowBtnPutType(EPlayerInfoSubWindowBtnType InBtnType, bool bIsEnablePut);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptKickRequestWindow(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptFriendRequestWindow(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcceptBlockWindow(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void DecidePFProfileDisplay(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void CreatePopUpWindowDialog();
    
    UFUNCTION(BlueprintCallable)
    void CreatePopUpErrorWindow(EPlayerInfoSubWindowErrorType InErrorType);
    
    UFUNCTION(BlueprintCallable)
    void CreateCheckPopUpWindowDialog();
    
};

