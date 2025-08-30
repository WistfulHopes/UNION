#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuSelectPresetState.generated.h"

class APartyRaceMenuSequence;
class UPartyRacePresetSelect;
class UPartyRaceSelectPresetScene;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuSelectPresetState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceRivalLevelDownPopupWindowDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceSelectPresetScene* SelectPresetScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelDownPopupTextNo;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalLevelDownPopupWindowDelegate OnFinishedRivalLevelDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceRivalLevelDownPopupWindowDelegate OnDecisionRivalLevelDown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindowPtr;
    
public:
    UPartyRaceMenuSelectPresetState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupRivalLevelDownPopupWindow(bool& SpawnPopup);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRivalLevelDownDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    UPartyRacePresetSelect* GetPartyRacePresetSelectScene();
    
    UFUNCTION(BlueprintCallable)
    APartyRaceMenuSequence* GetOwnerPartyRaceMenuSequence();
    
};

