#pragma once
#include "CoreMinimal.h"
#include "ERivalTeamId.h"
#include "CommonUserWidget.h"
#include "CommonRivalRewardLineWidget.generated.h"

class UHorizontalBox;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonRivalRewardLineWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCommonRivalRewardLineWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonRivalRewardLineWidgetOnFinished OnPlayCountUpFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonRivalRewardLineWidgetOnFinished OnPlayOpenNextFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Line_Get_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Line_Get_02;
    
public:
    UCommonRivalRewardLineWidget();

    UFUNCTION(BlueprintCallable)
    void SetWinCount(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void Setup(ERivalTeamId InTeamID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCountUp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOngoingRewardIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNecessaryWinCounts(int32 InIndex) const;
    
};

