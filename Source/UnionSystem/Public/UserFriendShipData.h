#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UserFriendShipData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserFriendShipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, int32> FriendShipGivedTicketForCharacterAmount;
    
    FUserFriendShipData();
};

