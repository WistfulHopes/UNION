#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyInvitationNoticeInfo.h"
#include "ProcessLobbyInvitationObject.generated.h"

class ULobbyJoinInfo;

UCLASS(Blueprintable)
class UNION_API AProcessLobbyInvitationObject : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnProcessLobbyInvitationDelegate, FLobbyInvitationNoticeInfo, LobbyInvitationNoticeInfo, ULobbyJoinInfo*, LobbyInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProcessLobbyInvitationDelegate ShowLobbyInvitationDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULobbyJoinInfo*> CacheLobbyInvitationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyJoinInfo* CheckLobbyInvitation;
    
public:
    AProcessLobbyInvitationObject(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnGetInviteUserData(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishPlatformCheck(bool Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckFinishUserName(bool Success, const FString& SanitizedUserName);
    
    UFUNCTION(BlueprintCallable)
    void CheckUserNameStart();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlatformStart();
    
    UFUNCTION(BlueprintCallable)
    void CheckLobbyInvitationStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddLobbyInvitation(ULobbyJoinInfo* LobbyInvitation);
    
};

