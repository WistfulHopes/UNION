#pragma once
#include "CoreMinimal.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelectVoteComponent.generated.h"

class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelectVoteComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
public:
    ULobbyCourseSelectVoteComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
};

