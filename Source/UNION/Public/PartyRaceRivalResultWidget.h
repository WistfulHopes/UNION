#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "ERivalTeamId.h"
#include "CommonUserWidget.h"
#include "PartyRaceRivalResultWidget.generated.h"

class UButton;
class UCommonRivalLevelWidget;
class UImage;
class UPartyRaceRivalResultProgressWidget;
class URewardGetWindow;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceRivalResultWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceRivalResultWidgetOnLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceRivalResultWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalResultWidgetOnLoaded OnLoadedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalResultWidgetOnFinished OnPlayWinFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalResultWidgetOnFinished OnPlayProgressFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalResultWidgetOnFinished OnPlayOutFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalResultWidgetOnFinished OnForceCloseEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> _PlayerCharaImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _RivalLeaderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _RivalMemberImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _RivalTeamIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _RivalTeamNamePlateImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* _RivalLevelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _RivalTeamNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceRivalResultProgressWidget* _ProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetWindow* _RewardGetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* _InputButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Result_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Result_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Reward_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Reward_Out;
    
public:
    UPartyRaceRivalResultWidget();

    UFUNCTION(BlueprintCallable)
    void StartLoad(const TArray<EDriverId>& PlayerDriverIds, ERivalTeamId RivalTeamId, int32 EliminatedCount);
    
    UFUNCTION(BlueprintCallable)
    void SetNewWinCount(int32 NewWinCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayWin();
    
    UFUNCTION(BlueprintCallable)
    void PlayProgress();
    
    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayProgressCheckFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URewardGetWindow* GetRewardGetWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButton* GetInputButton();
    
};

