#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EDriverId.h"
#include "ERaceSettingCourseSelecting.h"
#include "EStageId.h"
#include "OnBackEventDelegate.h"
#include "EMatchingLobbyType.h"
#include "LobbyTravelRingManager.generated.h"

class AMenuLobbyTravelRingActor;

UCLASS(Blueprintable)
class UNION_API ALobbyTravelRingManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLobbyTravelRingManagerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyTravelRingManagerDelegate OnShowStageNameEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent SelectCourseResultFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingCourseSelecting CourseSelectingType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TransformTravelRingCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformTravelRings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMenuLobbyTravelRingActor*> TravelRingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CourseIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnSelectedRingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnDecidedRingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId LobbyDecidedDriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyDecidedPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyDecidedRingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId LobbyDecidedCourseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> PlayerSelectedCourseIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerSelectedRingIndexs;
    
public:
    ALobbyTravelRingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectedStageIds(const TArray<EStageId> InStageIds, const TArray<int32> InRingIndexs);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyDecidedCourseId(EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    void SelectRing(int32 InRingIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequencerSelectOnceRingLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequencerSelectCourseResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequencerLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetup(EMatchingLobbyType InGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable)
    void InitializeSelectCourseResult(EDriverId InDriverId, const FString& InPlayerName, int32 InSelectedRingIndex, EStageId InLobbyDecidedCourseId);
    
    UFUNCTION(BlueprintCallable)
    void HiddenInGameTravelRings(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void DestroyTravelRings();
    
    UFUNCTION(BlueprintCallable)
    void DecideRing(int32 InRingIndex);
    
    UFUNCTION(BlueprintCallable)
    void CreateTravelRings(const TArray<EStageId>& InCourseId, bool bIsFirstSetAtRandom);
    
    UFUNCTION(BlueprintCallable)
    void CreateTravelRing(const EStageId& InCourseId, ERaceSettingCourseSelecting InCourseSelectingType, bool bIsFirstSetAtRandom);
    
};

