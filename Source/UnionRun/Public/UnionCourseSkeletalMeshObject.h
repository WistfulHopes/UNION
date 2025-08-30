#pragma once
#include "CoreMinimal.h"
#include "UnionCourseObjectBase.h"
#include "UnionCourseSkeletalMeshObject.generated.h"

class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCourseSkeletalMeshObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* DrawSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* CollisionStaticMeshComponent;
    
    AUnionCourseSkeletalMeshObject(const FObjectInitializer& ObjectInitializer);

};

