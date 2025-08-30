#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EAppSupportedPlatform.h"
#include "EGameModeId.h"
#include "MyRankingAsyncResult.h"
#include "RankingDataFestaPoint.h"
#include "RankingDataFestaPointList.h"
#include "RankingDataLegendCompe.h"
#include "RankingDataLegendCompeList.h"
#include "RankingDataRankMatch.h"
#include "RankingDataRankMatchList.h"
#include "RankingDataTimeTrial.h"
#include "RankingDataTimeTrialList.h"
#include "UnionUIInputWidget.h"
#include "MenuRankingLineData.h"
#include "Templates/SubclassOf.h"
#include "RankingLineScroller.generated.h"

class URankingLine;
class UScrollBox;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URankingLineScroller : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URankingLine* MyLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URankingLine*> Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeId GameModeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_MyDetaDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_OtherDetaDay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URankingLine> ItemClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMenuRankingLineData> RankingDataList;
    
public:
    URankingLineScroller();

    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(int32 InIndex, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMyLine(const FMenuRankingLineData& RankingLineData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItems();
    
    UFUNCTION(BlueprintCallable)
    void SetRankDateString(const FString& DateString);
    
    UFUNCTION(BlueprintCallable)
    void SetRankDateDateTime(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMyRankDateString(const FString& DateString);
    
    UFUNCTION(BlueprintCallable)
    void SetMyRankDateDateTime(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable)
    void SetGameMode(EGameModeId InGameMode);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHover();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataTimeTrialToRankingList(const FRankingDataTimeTrialList& RankingData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataTimeTrialToRankingLine(const FRankingDataTimeTrial& RankingData, FMenuRankingLineData& OutLineData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataRankMatchToRankingList(const FRankingDataRankMatchList& RankingData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataRankMatchToRankingLine(const FRankingDataRankMatch& RankingData, FMenuRankingLineData& OutLineData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataLegendCompeToRankingList(const FRankingDataLegendCompeList& RankingData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataLegendCompeToRankingLine(const FRankingDataLegendCompe& RankingData, FMenuRankingLineData& OutLineData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataFestaToRankingList(const FRankingDataFestaPointList& RankingData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertRankingDataFestaPointToRankingLine(const FRankingDataFestaPoint& RankingData, FMenuRankingLineData& OutLineData);
    
    UFUNCTION(BlueprintCallable)
    void ConvertMyRankingDataTimeTrialToRankingLine(EAppSupportedPlatform Platform, const FMyRankingAsyncResult& RankingData, FMenuRankingLineData& OutLineData);
    
    UFUNCTION(BlueprintCallable)
    void ClearLines();
    
    UFUNCTION(BlueprintCallable)
    void AddItem(const FMenuRankingLineData& RankingLineData);
    
};

