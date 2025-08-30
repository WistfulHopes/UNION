#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CellIndicatorOnlineSettingData.generated.h"

UCLASS(Blueprintable)
class UNION_API UCellIndicatorOnlineSettingData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> PlayStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> CrossPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> FriendRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> IdSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> InviteLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<bool, FText> InviteLobbyInRace;
    
    UCellIndicatorOnlineSettingData();

};

