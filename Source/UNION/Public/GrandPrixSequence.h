#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "MenuSequenceUIInterface.h"
#include "GrandPrixSequence.generated.h"

class UCourseSelectWidgetBase;
class UGrandPrixCommonData;
class USelectGrandPrixAndCourseState;

UCLASS(Blueprintable)
class UNION_API AGrandPrixSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCourseSelectWidgetBase* CourseSelectUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGrandPrixCommonData* CommonData;
    
    AGrandPrixSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedGPData(USelectGrandPrixAndCourseState* SelectCourseState);
    
    UFUNCTION(BlueprintCallable)
    void ResetRivalDataFromMenuData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable)
    void InitGPRaceResultData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRivalWinRewardEventThreshold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRivalDominationTargetCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRivalDominationCount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChooseRival(bool& OutRivalChanged, bool MileStone);
    

    // Fix for true pure virtual functions not being implemented
};

