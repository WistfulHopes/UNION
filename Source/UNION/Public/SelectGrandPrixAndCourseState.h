#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EGrandPrixId.h"
#include "EStageId.h"
#include "GrandPrixStatus.h"
#include "EMachineSelectState.h"
#include "MenuSequenceSubStateBase.h"
#include "SelectGrandPrixAndCourseState.generated.h"

class UCourseSelectWidgetBase;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USelectGrandPrixAndCourseState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelDownPopupFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLevelDownPopupDecision);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideRivalSelectButtonGrandPrixAndCourse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideGrandPrixAndCourse);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectGrandPrixOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId SelectedStageIdSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId PrevSelectedStageIdSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId SelectedGrandprixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId LastSelectDriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCourseSelectWidgetBase* CourseSelectWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGrandPrixAndCourse OnDecideGrandPrixAndCourse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGrandPrixAndCourse OnCancelAndPrevSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGrandPrixAndCourse OnBackToClassSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGrandPrixAndCourse OnGoToGadgetCustom;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideRivalSelectButtonGrandPrixAndCourse OnDecideRivalSelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelDownPopupDecision OnDecisionLevelDownPopupWindow;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelDownPopupFinished OnFinishedLevelDownPopupWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
public:
    USelectGrandPrixAndCourseState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TransitionToTimeTrial();
    
    UFUNCTION(BlueprintCallable)
    void SetupRivalLevelDownPopup(bool& bSpawnPopup);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNextMachineSelectState(EMachineSelectState InState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRivalLevelDownPopupClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetGrandPrixStatus(TArray<FGrandPrixStatus>& OutGrandPrixStatus);
    
};

