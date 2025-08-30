#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "EDriverAnimationAssetId.h"
#include "EDriverBlendSpaceAssetId.h"
#include "ERacerAnimSyncId.h"
#include "RacerAnimInstance.h"
#include "UnionRacerAnimSyncChild.h"
#include "MenuDriverAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequence;
class UBlendSpace;

UCLASS(Blueprintable, NonTransient)
class UNION_API UMenuDriverAnimInstance : public URacerAnimInstance, public IUnionRacerAnimSyncChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshVisibilityFromAnimationCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimationAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlendSpace*> BlendSpaceAssets;
    
public:
    UMenuDriverAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetAnimSyncTimeById(const ERacerAnimSyncId ID, float Time);
    
    UFUNCTION(BlueprintCallable)
    void PreloadMenuAllAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageAssetById(const EDriverAnimationAssetId AssetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpace* GetBlendSpaceAssetById(const EDriverBlendSpaceAssetId AssetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimSyncTimeById(const ERacerAnimSyncId ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationAssetById(const EDriverAnimationAssetId AssetId) const;
    

    // Fix for true pure virtual functions not being implemented
};

