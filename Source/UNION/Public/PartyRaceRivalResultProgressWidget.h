#pragma once
#include "CoreMinimal.h"
#include "ERivalTeamId.h"
#include "CommonUserWidget.h"
#include "PartyRaceRivalResultProgressWidget.generated.h"

class UCommonItemIcon;
class UPartyRaceRivalResultProgressStampWidget;
class UUnionRichTextBlock;
class UUnionUITextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceRivalResultProgressWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUPartyRaceRivalResultProgressWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUPartyRaceRivalResultProgressWidgetOnFinished OnPlayCheckFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUPartyRaceRivalResultProgressWidgetOnFinished OnPlayInFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUPartyRaceRivalResultProgressWidgetOnFinished OnPlayOutFinishedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonItemIcon* _ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceRivalResultProgressStampWidget*> _StampWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _ConditionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _ItemNumText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anm_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anm_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Check_InLoop;
    
public:
    UPartyRaceRivalResultProgressWidget();

    UFUNCTION(BlueprintCallable)
    void SetDisplay(ERivalTeamId RivalTeamId, int32 EliminatedCount, int32 winCount, bool PreCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayOut();
    
    UFUNCTION(BlueprintCallable)
    void PlayIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayCheck();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayCheckFinished();
    
};

