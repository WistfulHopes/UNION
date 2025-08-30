#pragma once
#include "CoreMinimal.h"
#include "EPlayerInfoSubWindowBtnType.h"
#include "PlayerInfoDecideSubWindowDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerInfoDecideSubWindowDelegate, EPlayerInfoSubWindowBtnType, SubWindowType, bool, bIsError);

