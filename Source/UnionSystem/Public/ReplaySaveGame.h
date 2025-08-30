#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ReplaySaveSlot.h"
#include "SaveDataHeader.h"
#include "ReplaySaveGame.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UReplaySaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHeader _Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplaySaveSlot> ReplaySlot;
    
    UReplaySaveGame();

};

