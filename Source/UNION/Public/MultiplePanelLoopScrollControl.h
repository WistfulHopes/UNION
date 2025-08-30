#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "MultiplePanelLoopScrollControl.generated.h"

class UObject;
class UUnionUILoopScrollBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMultiplePanelLoopScrollControl : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FScrollAnimationEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollAnimationEvent OnScrollFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CenterElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionUISceneBase*> ElementArr;
    
    UMultiplePanelLoopScrollControl();

    UFUNCTION(BlueprintCallable)
    void SetupCenterElement();
    
    UFUNCTION(BlueprintCallable)
    void Setup(UUnionUILoopScrollBox* InUnionUILoopScrollBox, UWidgetAnimation* InScrollAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetControllableFlag(bool InControllable);
    
    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimation(bool bIsMoveRight, bool bInImmediateReflection);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedScrollAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllableFlag() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetCenterElement();
    
};

