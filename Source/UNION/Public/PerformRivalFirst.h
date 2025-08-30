#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDriverId.h"
#include "EPerformRivalInteractionType.h"
#include "OnVoiceFinishedPerformRivalFirstDelegateDelegate.h"
#include "PerformRivalFirst.generated.h"

class UAtomComponent;
class UCommonRivalLevelWidget;

UCLASS(Blueprintable)
class UNION_API APerformRivalFirst : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* RivalLevelWidget;
    
public:
    APerformRivalFirst(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayRivalSoloVoice(const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayRivalFirstVoice(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayPlayerLastVoice(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFirstDelegate OnVoiceFinished) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleUniquePerformRival(const EDriverId PlayerDriverId, const EDriverId RivalDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerformRivalInteractionType GetRivalFirstInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerformRivalInteractionType GetPlayerLastInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId) const;
    
};

