#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "EUnionCameraModifierPostEffectType.h"
#include "UnionCameraModifierPostEffect.generated.h"

class UDataTable;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionCameraModifierPostEffect : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PostEffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EUnionCameraModifierPostEffectType, bool> PostEffectEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EUnionCameraModifierPostEffectType, UMaterialInterface*> PostEffectMaterialInterface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionCameraModifierPostEffectType, UMaterialInstanceDynamic*> PostEffectMaterialInstance;
    
public:
    UUnionCameraModifierPostEffect();

    UFUNCTION(BlueprintCallable)
    void SetCameraPostEffectParameter(EUnionCameraModifierPostEffectType EffectType, FName ParameterName, float Value);
    
};

