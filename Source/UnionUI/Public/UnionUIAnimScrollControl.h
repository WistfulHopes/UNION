#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/CanvasPanelSlot.h"
#include "Slate/WidgetTransform.h"
#include "EUnionUIControlDir.h"
#include "EUnionUIControlVH.h"
#include "UnionUIButtonBase.h"
#include "UnionUIAnimScrollControl.generated.h"

class UTexture2D;
class UUnionUIAnimScrollControl;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIAnimScrollControl : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScrollAnimationEvent, UUnionUIAnimScrollControl*, FinishedWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionUIControlVH ControlVH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PresentElementNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CenterElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastAnimDownRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> PresentElementArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ElementArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionUIControlDir, UWidgetAnimation*> ScrollAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnchorData> AnchorArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> ColorAndOpacityArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> PositionArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetTransform> WidgetTransformArr;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollAnimationEvent OnScrollFinishedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllable;
    
    UUnionUIAnimScrollControl();

    UFUNCTION(BlueprintCallable)
    void UpdateCenterElementIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAnimation(EUnionUIControlDir ControlDir, UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetElementTexture(const int32& InIndex, UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetControllableFlag(bool InControllable);
    
    UFUNCTION(BlueprintCallable)
    void Repopurate(bool bDownRight);
    
    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimation(EUnionUIControlDir ScrollDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedScrollAnimationBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedScrollAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetElementArrIndexbyPivot(int32 Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllableFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCenterElementIndex() const;
    
    UFUNCTION(BlueprintCallable)
    int32 CalcNextCenterElementIndex(bool InLastAnimDownRight);
    
};

