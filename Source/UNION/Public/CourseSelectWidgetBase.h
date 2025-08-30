#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGameModeId.h"
#include "EGrandPrixId.h"
#include "EStageId.h"
#include "CourseSelectWidgetBase.generated.h"

class APlayerController;
class UCourseSelectSubCategoryIcon;
class UMaterialInstanceDynamic;
class UUnionUIButtonStandard;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCourseSelectWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCourseSelectRivalSelectEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCourseSelectGrandprixIconEvent, UCourseSelectSubCategoryIcon*, SelectedGrandprixButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCourseSelectGrandprixDecitionEvent, EGrandPrixId, SelectedGrandprixId, EStageId, FirstCourseStageId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCourseSelectCourseDecitionEvent, EStageId, SelectedCourseStageId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CenterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CenterPivotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrandPrixOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId CurrentSelectedGrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId CurrentSelectedStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCourseSelectSubCategoryIcon*> CourseSelectSubCategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGrandPrixId> GrandPrixIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EGrandPrixId, UCourseSelectSubCategoryIcon*> GrandPrixIdAndEmblemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsOpened;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCourseSelectSubCategoryIcon*> GrandPrixEmblemArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonStandard*> MainButtons;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixIconEvent OnCourseSelectGrandprixSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixIconEvent OnCourseSelectGrandprixCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixIconEvent OnCourseSelectBackToClassSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixIconEvent OnGadgetCustomSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixIconEvent OnTimeTrialSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectGrandprixDecitionEvent OnDecideGrandprixId;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectCourseDecitionEvent OnDecideStageId;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCourseSelectRivalSelectEvent OnDecideRivalSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CourseMaterialNomal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CourseMaterialAnotherWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastRightLeftAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_ShortBox_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_LongBox_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_ShortBox_to_LongBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CourseSelect_In;
    
    UCourseSelectWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrophy();
    
    UFUNCTION(BlueprintCallable)
    bool StartRotate(bool bRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusMenu(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedRotate();
    
    UFUNCTION(BlueprintCallable)
    void LotteryMCEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(EGameModeId InGameModeId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeGrandprix(EGrandPrixId InGrandprixId);
    
};

