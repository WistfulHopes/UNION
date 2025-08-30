#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UnionSceneComponent.h"
#include "CollisionHitInfo.h"
#include "EAttachmentType.h"
#include "EDomainNumber.h"
#include "EStaticBodyShapeType.h"
#include "StaticBodyBoxParam.h"
#include "StaticBodyCapsuleParam.h"
#include "StaticBodyCylinderParam.h"
#include "StaticBodySphereParam.h"
#include "CollisionBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UCollisionBaseComponent : public UUnionSceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FCollisionBaseComponent, UCollisionBaseComponent, CollisionBaseComponentDelegate, const FCollisionHitInfo&, HitInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentType AttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelfCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticBodyShapeType BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticBodySphereParam SphereParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticBodyBoxParam BoxParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticBodyCylinderParam CylinderParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticBodyCapsuleParam CapsuleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDomainNumber DomainNumber;
    
    UCollisionBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCollisionShape();
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTransform(const FTransform& trans);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalScalingUE(const FVector& Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetDomainNumber(EDomainNumber domain);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool bEnabled, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollisionAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalScalingUE() const;
    
};

