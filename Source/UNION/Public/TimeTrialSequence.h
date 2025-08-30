#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "MenuSequenceUIInterface.h"
#include "TimeTrialSequence.generated.h"

class UCourseSelectWidgetBase;
class UGhostSelectState;
class UTimeTrialSelectCourseState;

UCLASS(Blueprintable)
class UNION_API ATimeTrialSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCourseSelectWidgetBase* CourseSelectUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGhostMachineDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLineGuideDisable;
    
    ATimeTrialSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetTimeTrialRaceSetting(UTimeTrialSelectCourseState* InSelectCourseState, UGhostSelectState* InGhostSelectState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    

    // Fix for true pure virtual functions not being implemented
};

