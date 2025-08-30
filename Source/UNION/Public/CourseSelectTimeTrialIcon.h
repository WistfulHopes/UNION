#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonStandard.h"
#include "CourseSelectTimeTrialIcon.generated.h"

class UUnionUIButtonBaseCore;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCourseSelectTimeTrialIcon : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Lock_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Out;
    
public:
    UCourseSelectTimeTrialIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnDeselected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnDecided(UUnionUIButtonBaseCore* Button);
    
};

