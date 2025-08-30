#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UnionUISceneBase.h"
#include "LobbyCourseSelectSceneBase.generated.h"

class UUnionUIButtonsPanel;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API ULobbyCourseSelectSceneBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Window_Out;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* MainButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> courseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecideCourseIndex;
    
public:
    ULobbyCourseSelectSceneBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusableButton(bool InFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideCourseIndex(int32 InDecideCourseIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(const TArray<EStageId>& InCourseId, int32 InDecideCourseIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonsPanel* GetMainButtonsPanel();
    
};

