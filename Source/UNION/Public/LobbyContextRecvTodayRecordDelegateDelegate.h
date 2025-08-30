#pragma once
#include "CoreMinimal.h"
#include "FriendLobbyMemberTodayRecord.h"
#include "LobbyContextRecvTodayRecordDelegateDelegate.generated.h"

class UCustomMatchLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvTodayRecordDelegate, UCustomMatchLobbyMemberContext*, SendUser, FFriendLobbyMemberTodayRecord, MemberRecord);

