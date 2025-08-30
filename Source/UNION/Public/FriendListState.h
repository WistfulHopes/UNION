#pragma once
#include "CoreMinimal.h"
#include "EFriendListCategory.h"
#include "MenuSequenceSubStateBase.h"
#include "FriendListState.generated.h"

class UFriendListMainWidget;
class UFriendListWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UFriendListState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendListCategory OpenCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListWidget* FriendListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListMainWidget* MainWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnlineSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSendInvitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAcceptInvitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenFriendListWindow;
    
    UFriendListState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOpenFriendListWindow(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenCategory(EFriendListCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOnlineSequence(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSendInvitation(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAcceptInvitation(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnForceEndEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyFriendListWidget();
    
    UFUNCTION(BlueprintCallable)
    bool GetOpenFriendListWindow();
    
    UFUNCTION(BlueprintCallable)
    bool GetCloseByNotLoginEOS();
    
};

