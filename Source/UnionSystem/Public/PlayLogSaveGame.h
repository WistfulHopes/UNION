#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayLogSaveGameCharacter.h"
#include "PlayLogSaveGameCondition.h"
#include "PlayLogSaveGameEventFesta.h"
#include "PlayLogSaveGameFriendMatch.h"
#include "PlayLogSaveGameGadget.h"
#include "PlayLogSaveGameGrandprix.h"
#include "PlayLogSaveGameMachine.h"
#include "PlayLogSaveGameMode.h"
#include "PlayLogSaveGameParty.h"
#include "PlayLogSaveGameProgressGrandprix.h"
#include "PlayLogSaveGameProgressParty.h"
#include "PlayLogSaveGameProgressRival.h"
#include "PlayLogSaveGameTimeTrial.h"
#include "PlayLogSystem.h"
#include "SaveDataHeader.h"
#include "PlayLogSaveGame.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UPlayLogSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHeader _Header;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSystem System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameProgressGrandprix ProgressGrandprix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameProgressRival ProgressRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameProgressParty ProgressParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameCharacter Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameMachine machine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameGadget gadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameGrandprix GrandPrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameParty Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameTimeTrial TimeTrial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameFriendMatch FriendMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameEventFesta EventFesta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayLogSaveGameMode GameMode;
    
public:
    UPlayLogSaveGame();

};

