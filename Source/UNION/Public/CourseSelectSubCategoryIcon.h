#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixId.h"
#include "EGrandPrixProgressId.h"
#include "UnionUIButtonStandard.h"
#include "ECourseSelectCategoryIconVisualType.h"
#include "CourseSelectSubCategoryIcon.generated.h"

class UGrandPrixTrophyUI;
class UImage;
class UTexture2D;
class UUnionUIButtonBaseCore;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCourseSelectSubCategoryIcon : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* _CourseIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* _CourseIconEmeraldMaskImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrandPrixTrophyUI* _TrophyUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* _EffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* _CursorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* _CursorSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForAnimationToDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Lock_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Out;
    
public:
    UCourseSelectSubCategoryIcon();

    UFUNCTION(BlueprintCallable)
    void UpdateVisualType(ECourseSelectCategoryIconVisualType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetWaitForAnimationToDecide(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetTrophy(EGrandPrixProgressId GPProgressId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNextId(EGrandPrixId IconId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLockStatus(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void SetIconTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrandPrixStatus(const TArray<uint8>& InNomalProgress, const TArray<uint8>& InMirrorProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrandprixIconId(EGrandPrixId IconId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnDeselected(UUnionUIButtonBaseCore* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnDecided(UUnionUIButtonBaseCore* Button);
    
};

