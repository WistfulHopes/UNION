#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EDriverAnimationAssetId.h"
#include "EDriverBlendSpaceAssetId.h"
#include "ERacerAnimSyncId.h"
#include "RacerAnimInstance.h"
#include "UnionRacerAnimSyncChild.h"
#include "DriverAnimInstance.generated.h"

class IHoldItemAnimator;
class UHoldItemAnimator;
class UAnimMontage;
class UAnimSequence;
class UBlendSpace;
class UCustomAttrAnimComponent;

UCLASS(Blueprintable, NonTransient)
class UNION_API UDriverAnimInstance : public URacerAnimInstance, public IUnionRacerAnimSyncChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHoldItemAnimator> HoldItemAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshVisibilityFromAnimationCurve;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationAssets[161];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpaceAssets[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontageAssets[161];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsSharedAnimMontageAssets[161];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* FaceAnimationAssets[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomAttrAnimComponent* CustomAttrAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingFaceMontageDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingFaceMontageNormal;
    
public:
    UDriverAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetAnimSyncTimeById(const ERacerAnimSyncId ID, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ReloadAllAssets();
    
    UFUNCTION(BlueprintCallable)
    void PreloadAllAssets();
    
    UFUNCTION(BlueprintCallable)
    void OnTrickMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingTopMostAnimMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnyAnimMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpace* GetBlendSpaceAssetById(const EDriverBlendSpaceAssetId AssetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimSyncTimeById(const ERacerAnimSyncId ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetAnimMontageAssetById(const EDriverAnimationAssetId AssetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationAssetById(const EDriverAnimationAssetId AssetId) const;
    

    // Fix for true pure virtual functions not being implemented
};

