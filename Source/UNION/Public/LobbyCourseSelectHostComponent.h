#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelectHostComponent.generated.h"

class UCourseSelectWidgetBase;
class USoundAtomCue;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelectHostComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCourseSelectWidgetBase> CourseSelectWidgetBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCourseSelectWidgetBase* CourseSelectWidgetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
public:
    ULobbyCourseSelectHostComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DecideStageCallback(EStageId StageId);
    
};

