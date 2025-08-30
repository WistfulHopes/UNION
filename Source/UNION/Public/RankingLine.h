#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPlatform.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "UnionUIButtonBase.h"
#include "MenuRankingLineData.h"
#include "RankingLine.generated.h"

class UHonorTitlePlateUserWidget;
class UImage;
class URankIcon;
class UUnionRichTextBlock;
class UUnionUITextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URankingLine : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMyLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeId GameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuRankingLineData RankingLineData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* DSP_WidgetSwitcher_Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* NUM_th;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URankIcon* DSP_WBP_ResultRate_Sub_RankIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DMY_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHonorTitlePlateUserWidget* WBP_HonorTitle_Plate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* Num_Point_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* Num_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Select_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Myself_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PointBaseText;
    
public:
    URankingLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateByRankingModeType();
    
    UFUNCTION(BlueprintCallable)
    void SetRecordTime(int32 TotalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRateValue(int32 rateValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRankValue(int32 rankValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRankingLineData(EGameModeId RankType, const FMenuRankingLineData& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerName(const FText& RacerName);
    
    UFUNCTION(BlueprintCallable)
    void SetHonerTitleId(int32 titleId);
    
    UFUNCTION(BlueprintCallable)
    void SetFestaPointValue(int32 TotalPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossPlayIcon(ECrossplayPlatform CrossplayType);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterId(EDriverId CharaId);
    
    UFUNCTION(BlueprintCallable)
    void FireMyselfAnim();
    
    UFUNCTION(BlueprintCallable)
    void ClearDisplay();
    
};

