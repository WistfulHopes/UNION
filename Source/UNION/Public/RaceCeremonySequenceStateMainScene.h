#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "ERivalType.h"
#include "CeremonyMachineData.h"
#include "RaceCeremonySequenceStateBase.h"
#include "RewardAchievementData.h"
#include "RaceCeremonySequenceStateMainScene.generated.h"

class AActor;
class ASceneDriver;
class ASceneInputKeyHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceCeremonySequenceStateMainScene : public URaceCeremonySequenceStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASceneDriver*> SceneDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChampionRankByRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> PlayersDriverID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayersRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneInputKeyHandler* InputKeyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCeremonyMachineData> CustomizeDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RacerIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalChampion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalType ChampionRivalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChampionPlayerInLocalMultiplayer;
    
    URaceCeremonySequenceStateMainScene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveRewardItemData(const FRewardAchievementData& AchievementData);
    
};

