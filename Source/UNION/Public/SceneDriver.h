#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDriverId.h"
#include "EDriverPose.h"
#include "UserMachineCustomizeData.h"
#include "EAnimationVoiceLipSyncId.h"
#include "EPerformRivalInteractionType.h"
#include "ERivalLipSyncType.h"
#include "ESceneDriverAnimationId.h"
#include "ESceneDriverAnimationMode.h"
#include "MachineMaterialData.h"
#include "OnAssetLoadedEventDelegate.h"
#include "SceneDriverAnimator.h"
#include "SceneDriverVoicePlayer.h"
#include "SceneDriver.generated.h"

class UAnimMontage;
class UAnimSequence;
class UAnimationAsset;
class UCustomAttrAnimComponent;
class UDataTable;
class UStaticMeshComponent;
class UUnionAtomComponent;
class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNION_API ASceneDriver : public AActor, public ISceneDriverAnimator, public ISceneDriverVoicePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverPose DriverPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneDriverAnimationMode AnimationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRivalSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLC;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssetLoadedEvent OnAssetLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DriverDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LipSyncAnimSequenceAsset;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequenceAssets[23];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomAttrAnimComponent* CustomAttrAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineMaterialData DefaultSteeringWheelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAtomComponent* UnionAtomComponent;
    
public:
    ASceneDriver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringWheelMaterials(const FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetDriverPose(const EDriverPose& NewDriverPose);
    
    UFUNCTION(BlueprintCallable)
    void PlayRivalAnimationAndLipSync(EPerformRivalInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMontage(UAnimMontage* AnimMontage, const bool bIsLooping, const float Position);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationWithVoiceAndLipSync(EAnimationVoiceLipSyncId ID);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationByAsset(UAnimationAsset* InAnimToPlay, bool bIsLooping, const float Position, const bool bWithPlayFacialSlot);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(ESceneDriverAnimationId ID, bool bIsLooping);
    
    UFUNCTION(BlueprintCallable)
    bool OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAnimation(ESceneDriverAnimationId ID, bool bIsLooping);
    
private:
    UFUNCTION(BlueprintCallable)
    void MontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void MontageBlendOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LoadRivalLipSyncMotion(EDriverId ID, ERivalLipSyncType Type, EDriverId RivalId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadDriver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAnimation(ESceneDriverAnimationId ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverPose GetDriverPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateDriver();
    

    // Fix for true pure virtual functions not being implemented
};

