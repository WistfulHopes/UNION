#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EMachineId.h"
#include "FestaPointRewardUIData.h"
#include "MenuInputRecieveInterface.h"
#include "FestaRacerContribution.h"
#include "UnionRaceUIFestaReward.generated.h"

class ACameraActor;
class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIFestaReward : public UUserWidget, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* EventCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* EventCamera2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> RacerModelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Player_TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MachineOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MachineAddY;
    
    UUnionRaceUIFestaReward();

    UFUNCTION(BlueprintCallable)
    ACameraActor* SetupViewBg(const FVector InCameraLocation, const FRotator CameraRotation, bool bIsLightSpawn);
    
    UFUNCTION(BlueprintCallable)
    void SetupCameraPlayerZoom();
    
    UFUNCTION(BlueprintCallable)
    void GetUpdatePoint(const TArray<FFestaPointRewardUIData>& RewardDataArray, int32 StartIconCount, int32 NowPoint, int32 Add, float& OutIconWindowX, float& OutGagePosi, int32& OutGetRewardIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetRacerContributionList(int32 InPlayerRacerIndex, TArray<FFestaRacerContribution>& OutFestaRacerContribution);
    
    UFUNCTION(BlueprintCallable)
    EMachineId GetEMachineId(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DestroyFestaResultData();
    

    // Fix for true pure virtual functions not being implemented
};

