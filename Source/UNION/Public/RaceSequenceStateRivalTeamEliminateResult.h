#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateRivalTeamEliminateResult.generated.h"

class ASceneInputKeyHandler;
class UMenuInputRecieveObject;
class UObject;
class UPartyRaceRivalResultWidget;
class UPartyRaceSubRivalAllWinWidget;
class UResultDonpaTicket;
class URewardGetBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateRivalTeamEliminateResult : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPartyRaceRivalResultWidget> _RivalResultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URewardGetBase> _RewardGetWindowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResultDonpaTicket> _ResultDonpaTicketClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPartyRaceSubRivalAllWinWidget> _SubRivalAllWinWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _RewardWindowTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneInputKeyHandler* _InputKeyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* _InputReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceRivalResultWidget* _RivalResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URewardGetBase* _RewardGetWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResultDonpaTicket* _ResultDonpaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceSubRivalAllWinWidget* _SubRivalAllWinWidget;
    
public:
    URaceSequenceStateRivalTeamEliminateResult(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWinPlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnSubRivalAllWinRewardFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSubRivalAllWinPlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSubRivalAllWinFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressPlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyPressed(FKey PressedKey);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonInput();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptKeyPressed(UObject* Object);
    

    // Fix for true pure virtual functions not being implemented
};

