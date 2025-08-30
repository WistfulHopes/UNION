#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuRivalTeamSelect.generated.h"

class URivalTeamSelectWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuRivalTeamSelect : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalTeamSelectWidget* RivalTeamSelectScene;
    
public:
    UPartyRaceMenuRivalTeamSelect(const FObjectInitializer& ObjectInitializer);

};

