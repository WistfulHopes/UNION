#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EAppControllerInputType.h"
#include "MenuInputRecieveInterface.h"
#include "ChallengeWidget.generated.h"

class UChallengeGaugeWidget;
class UChallengeListPanelWidget;
class UChallengeListTabWidget;
class UChallengeWidgetDataAsset;
class UHintPopupWindow;
class UResultDonpaTicket;
class URewardGetBase;
class USoundAtomCue;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeWidget : public UUserWidget, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SeOk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SeBack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UChallengeWidgetDataAsset> _DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeListTabWidget* _ListTabWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeListPanelWidget* _ListPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeListPanelWidget* _LeftListPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeListPanelWidget* _RightListPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChallengeGaugeWidget* _GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetBase* _RewardGetWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResultDonpaTicket* _ResultDonpaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URewardGetBase> _RewardGetWindowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResultDonpaTicket> _ResultDonpaTicketClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* _SECueCategoryChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Challenge_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Challenge_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Challenge_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Challenge_Left_To_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Challenge_Right_To_Left;
    
public:
    UChallengeWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnTipsWindowClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InAndPlayGauge(float NewProgress);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHintPopupWindow* CreateTipsWindow();
    

    // Fix for true pure virtual functions not being implemented
};

