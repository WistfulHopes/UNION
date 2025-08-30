#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionVATSequenceInfo.h"
#include "EBoostPadType.h"
#include "ESpecialObjGroup.h"
#include "UnionGimmickObjectBase.h"
#include "BoostPadObject.generated.h"

class UNiagaraSystem;
class USceneComponent;
class UStaticBodyComponent;
class UStaticMesh;
class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ABoostPadObject : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* VATMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoostPadType BoostPadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostGateRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInIrregular;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BoostPadMeshByType[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SpecialBoostPadMeshByType[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PassThroughFX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionExtentsByType[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecificId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHiddenMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObjGroup m_SpecialGroup;
    
public:
    ABoostPadObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGateScaleRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetBoostPadType(EBoostPadType Type, bool IsSpecial);
    
    UFUNCTION(BlueprintCallable)
    void OnVATUpdate(UUnionVATMeshComponent* VATComponent, const FUnionVATSequenceInfo& SequenceInfo);
    
};

