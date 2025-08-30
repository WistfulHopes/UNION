#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EDriverId.h"
#include "EDriverPose.h"
#include "ESceneDriverAnimationFlag.h"
#include "ESceneDriverAnimationId.h"
#include "ESceneDriverLipSyncId.h"
#include "SceneDriverAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UCustomAttrAnimComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class UNION_API USceneDriverAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverPose DriverPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipSyncBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipSyncBlendOutTime;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LipSyncAnimAssets[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequenceAssets[23];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomAttrAnimComponent* CustomAttrAnimComponent;
    
public:
    USceneDriverAnimInstance();

    UFUNCTION(BlueprintCallable)
    void ReloadAllAsset();
    
    UFUNCTION(BlueprintCallable)
    void PlayLipSyncMotion(UAnimSequence* LipSyncAnimAsset);
    
    UFUNCTION(BlueprintCallable)
    void PlayLipSyncById(ESceneDriverLipSyncId ID);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimSequence(UAnimSequenceBase* AnimSequence, const float Position);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMontageById(ESceneDriverAnimationId ID);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimMontage(UAnimMontage* AnimMontage, const float Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverPose GetDriverPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnimationFlag(ESceneDriverAnimationFlag flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationAsset(const ESceneDriverAnimationId AssetId) const;
    
};

