#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUnionUIFadeDirection.h"
#include "ERaceSequenceState.h"
#include "OnChangeSequenceDelegateDelegate.h"
#include "RaceBeforeSharedData.generated.h"

class ARaceSequence;
class ASceneDriver;
class ASceneInputKeyHandler;
class AVehicleInRacePawn;
class URaceBeforeSharedData;
class URaceSequenceStateBase;

UCLASS(Blueprintable)
class UNION_API URaceBeforeSharedData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RaceStartBaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidRacerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> RacerStartTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVehicleInRacePawn*> RacerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASceneDriver*> SceneDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrepared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneInputKeyHandler* InputKeyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LocalPlayerIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DebugAuraRacerIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, UObject*> LoadedObjectMap;
    
    URaceBeforeSharedData();

    UFUNCTION(BlueprintCallable)
    void UnregisterChangeSequenceDelegate();
    
    UFUNCTION(BlueprintCallable)
    void RegisterChangeSequenceDelegate(FOnChangeSequenceDelegate CallbackDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool PrepareRacers(ARaceSequence* RaceSequence);
    
    UFUNCTION(BlueprintCallable)
    void OpenSequence(URaceSequenceStateBase* CurrentRaceSequenceState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedTransition();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade(EUnionUIFadeDirection FadeDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    static URaceBeforeSharedData* GetOrInitializeData(ARaceSequence* RaceSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERaceSequenceState GetNextSequence(ERaceSequenceState SequenceState) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSequence(URaceSequenceStateBase* CurrentRaceSequenceState, ERaceSequenceState CurrentSequenceState);
    
    UFUNCTION(BlueprintCallable)
    void CleanupRacers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSkipSequence(ERaceSequenceState SequenceState) const;
    
};

