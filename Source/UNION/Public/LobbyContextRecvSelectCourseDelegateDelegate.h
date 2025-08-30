#pragma once
#include "CoreMinimal.h"
#include "LobbyContextRecvSelectCourseDelegateDelegate.generated.h"

class UCommonLobbyMemberContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyContextRecvSelectCourseDelegate, UCommonLobbyMemberContext*, SendUser, int32, courseId);

