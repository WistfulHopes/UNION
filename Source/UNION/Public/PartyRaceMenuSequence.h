#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "PartyRacePresetSetting.h"
#include "MenuSequenceUIInterface.h"
#include "PartyRaceMenuSequence.generated.h"

class UPartyRacePresetSelect;
class UPartyRaceSelectPresetScene;

UCLASS(Blueprintable)
class UNION_API APartyRaceMenuSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceSelectPresetScene* SelectPresetScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRacePresetSelect* PartyRacePresetSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSetting SelectedPresetSetting;
    
    APartyRaceMenuSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    

    // Fix for true pure virtual functions not being implemented
};

