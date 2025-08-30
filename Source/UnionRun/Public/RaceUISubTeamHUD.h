#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "RaceUISubTeamHUD.generated.h"

class URaceUISubRuleCount;
class URaceUISubTeamGroupAll;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubTeamHUD : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlPlayerRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamRacersIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> TeamPanelIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, TSoftObjectPtr<UTexture2D>> DriverIconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUISubRuleCount* RuleCountUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* TeamRankSwithcer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUISubTeamGroupAll* UITeamGroupAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSetGroupUI;
    
public:
    URaceUISubTeamHUD();

    UFUNCTION(BlueprintCallable)
    void UpdateCharaRank(bool IsForce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamRank(int32 TeamRank);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamRankRough();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecSetRankOnly(int32 PanelIndex, int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecPlayChangeRank(int32 PanelIndex, EDriverId DriverId, bool IsDispPlayer, int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecChangeRank(int32 PanelIndex, EDriverId DriverId, bool IsDispPlayer, int32 Rank);
    
};

