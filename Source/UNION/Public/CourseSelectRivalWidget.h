#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UnionUIButtonStandard.h"
#include "CourseSelectRivalWidget.generated.h"

class UCanvasPanel;
class UImage;
class UTexture2D;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCourseSelectRivalWidget : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _RootCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _CharaIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* _CharaIconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LoadTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RivalNext_Out;
    
public:
    UCourseSelectRivalWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisplayLevel(int32 RivalLevel, int32 BaseRivalLevel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDisplay(EDriverId RivalDriverId, int32 RivalWinCompleteThreshold, int32 RivalWinCompleteCount);
    
    UFUNCTION(BlueprintCallable)
    void SetInSEEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void Out();
    
    UFUNCTION(BlueprintCallable)
    void In();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTxtRivalCompleteNum();
    
};

