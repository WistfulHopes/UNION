#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AppLocalNetMasterData.h"
#include "NetMasterDataVersionData.h"
#include "SaveDataHeader.h"
#include "NetSaveGame.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UNetSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHeader _Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetMasterDataVersionData _LocalNetMasterDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppLocalNetMasterData _LocalNetMasterData;
    
    UNetSaveGame();

};

