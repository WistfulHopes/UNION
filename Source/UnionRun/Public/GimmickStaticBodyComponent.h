#pragma once
#include "CoreMinimal.h"
#include "EResultCameraProductionType.h"
#include "EUnionRacePostProcessEffectType.h"
#include "EUnionSurfaceType.h"
#include "StaticBodyComponent.h"
#include "UnionSurfaceFlag.h"
#include "GimmickStaticBodyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UGimmickStaticBodyComponent : public UStaticBodyComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreItemInvincibleWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAggressiveInvincibleWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDefensiveInvincibleWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAutopilotItemEndInvincibleWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSurfaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionSurfaceFlag EditSurfaceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionSurfaceType EditSurfaceType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CameraId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ParamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionRacePostProcessEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraProductionType ResultCameraType;
    
public:
    UGimmickStaticBodyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSurfaceType(EUnionSurfaceType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceFlag(FUnionSurfaceFlag flag);
    
    UFUNCTION(BlueprintCallable)
    void SetResultCameraType(EResultCameraProductionType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessEffectType(EUnionRacePostProcessEffectType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetParamId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreItemInvincibleWall(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraId(int32 ID);
    
};

