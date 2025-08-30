#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UnionUISceneBase.h"
#include "EPartyRaceCourseSwitchWindowButton.h"
#include "PartyRaceCourseSwitchWindow.generated.h"

class UPartyRaceCourseIcon;
class UPartyRaceCourseSwitch;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceCourseSwitchWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceCourseSwitch* TopParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> DisableCourseArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceCourseIcon*> CourseIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> WindowButtonNameArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUIButtonBase*> CourseSwitchWindowButtonArr;
    
    UPartyRaceCourseSwitchWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartRandomBP();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWindowButtonSetting(EPartyRaceCourseSwitchWindowButton InWindowButtonSetting);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCourseSwitchEnablePattern(const TArray<EStageId>& InPatternArr);
    
};

