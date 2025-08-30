#pragma once
#include "CoreMinimal.h"
#include "EPackageRingType.h"
#include "UnionCourseObjectBase.h"
#include "PackageRingInstanceObject.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API APackageRingInstanceObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageRingType m_packageRingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* m_hismDomain0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* m_hismDomain1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* m_hismDomain2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* m_hismDomain3;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    APackageRingInstanceObject(const FObjectInitializer& ObjectInitializer);

};

