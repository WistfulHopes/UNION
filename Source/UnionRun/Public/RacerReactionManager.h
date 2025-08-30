#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDriverId.h"
#include "ERacerReactionDriverType.h"
#include "RacerReactionVoice.h"
#include "RacerReactionManager.generated.h"

class URacerReactionInfoDataAsset;
class URacerReactionTextDataAsset;
class UUnionAtomComponent;
class UUnionRaceUI;

UCLASS(Blueprintable)
class UNIONRUN_API URacerReactionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUI* RaceHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDriverId, ERacerReactionDriverType> DriverTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERacerReactionDriverType> RacerIndexTypeList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URacerReactionInfoDataAsset* RacerReactionInfoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URacerReactionTextDataAsset* RacerReactionTextDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* AtomComponent;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* AtomComponentList[3];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* AtomComponentRacerList[12];
    
public:
    URacerReactionManager();

    UFUNCTION(BlueprintCallable)
    void SoundPlayIrregularInfoDod(const FRacerReactionVoice& ReactionVoice, int32 RacerIndex, float MinimumCoolTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayVoice(const FRacerReactionVoice& ReactionVoice, int32 RacerIndex, float MinimumCoolTime);
    
};

