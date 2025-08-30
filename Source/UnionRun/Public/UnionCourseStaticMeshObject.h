#pragma once
#include "CoreMinimal.h"
#include "UnionCourseObjectBase.h"
#include "UnionCourseStaticMeshObject.generated.h"

class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionCourseStaticMeshObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* DrawStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* CollisionStaticMeshComponent;
    
    AUnionCourseStaticMeshObject(const FObjectInitializer& ObjectInitializer);

};

