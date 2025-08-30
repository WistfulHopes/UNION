#pragma once
#include "CoreMinimal.h"
#include "MyRankingData.h"
#include "RankingLineScroller.h"
#include "EventInfoRanking.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class URankingLine;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UEventInfoRanking : public URankingLineScroller {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URankingLine* WBP_StatusInfo_Sub_RankingTable_54;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DSP_FestaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DSP_PlatformIcon_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DSP_PlatformIcon_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PlatformIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisplayRanking;
    
    UEventInfoRanking();

    UFUNCTION(BlueprintCallable)
    void UpdateCrossPlayIcon();
    
    UFUNCTION(BlueprintCallable)
    void SetupPersonalRanking(bool IsAllPlatform, FMyRankingData MyRankingData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformButtonVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayRankingCalcMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayNoRankingMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayErrorMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayCrossplayOffMessage();
    
    UFUNCTION(BlueprintCallable)
    void ClearPersonalRanking();
    
};

