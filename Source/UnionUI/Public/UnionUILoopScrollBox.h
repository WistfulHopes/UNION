#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "UnionUILoopScrollBox.generated.h"

class UObject;
class UUnionUILoopScrollBox;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUILoopScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScrollAnimationEvent, UUnionUILoopScrollBox*, FinishedWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ElementArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastAnimDownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AnimRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsManualLoopSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManualLoopNum;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollAnimationEvent OnScrollFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllable;
    
    UUnionUILoopScrollBox();

    UFUNCTION(BlueprintCallable)
    void UpdateDuaringMoveAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetMoveAnim(UUserWidget* InParentWidget, UWidgetAnimation* InMoveAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetElementArr(const TArray<UObject*>& InElementArr);
    
    UFUNCTION(BlueprintCallable)
    void SetControllableFlag(bool InControllable);
    
    UFUNCTION(BlueprintCallable)
    void Repopurate(bool bDownRight);
    
    UFUNCTION(BlueprintCallable)
    void PlayMoveAnim(bool IsDownRight, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveAnimFinishedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveAnimFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllableFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void ArrayShift(bool bDownRight);
    
};

