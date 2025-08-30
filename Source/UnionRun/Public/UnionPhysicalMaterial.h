#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EUnionSurfaceType.h"
#include "UnionSurfaceFlag.h"
#include "UnionPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UNIONRUN_API UUnionPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionSurfaceFlag SurfaceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSurfaceType PhysicalSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParameterId;
    
public:
    UUnionPhysicalMaterial();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsYellowDrill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlowDownMedium() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlowDownLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlippy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRespot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPseudoPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNrrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMachineOnlyWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreSticky() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitSlowdownMidium() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitSlowdownLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitLoseRing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitBouncyMidium() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuidedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrindDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGravitySwitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCylindrical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarDriveable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBumpyMedium() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBumpyLight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBumpyHeavy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBouncy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssistWallItemIgnoret() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssistWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUnionSurfaceFlag GetSurfaceFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUnionSurfaceType GetPhysicalSurfaceType() const;
    
};

