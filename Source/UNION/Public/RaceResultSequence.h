#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ERewardRedStarRingType.h"
#include "HonorCommendationData.h"
#include "HonorCommendationDataSetList.h"
#include "AppRaceResultData.h"
#include "RaceResultSequence.generated.h"

class UUnionRaceUI;
class UUnionRaceUIResultScene;
class UUnionRacers;

UCLASS(Blueprintable)
class UNION_API ARaceResultSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacers* Racers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUI* RaceHUD;
    
    ARaceResultSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadAnotherStageLevels();
    
    UFUNCTION(BlueprintCallable)
    void SetResultHUD(UUnionRaceUIResultScene* InResultHUD);
    
    UFUNCTION(BlueprintCallable)
    void SetResultByRacers(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable)
    void SetRacers(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceHUD(UUnionRaceUI* inRaceHud);
    
    UFUNCTION(BlueprintCallable)
    void OnSetHonorList(const FHonorCommendationDataSetList& list);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
public:
    UFUNCTION(BlueprintCallable)
    static void GetRewardRedStarRingTypeList(TArray<ERewardRedStarRingType>& OutRewardRedStarRingTypes, TArray<FHonorCommendationData>& OutRSRHonorList);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResultPlayerRank();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResultOtherPlayerRank(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    FAppRaceResultData GetRaceResultData();
    
};

