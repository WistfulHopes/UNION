#pragma once
#include "CoreMinimal.h"
#include "CoursePathCreateParams.h"
#include "UnionCourseObjectBase.h"
#include "UnionSplineActor.generated.h"

class USceneComponent;
class UUnionSplineComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionSplineActor : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoursePathCreateParams CoursePathCreateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    AUnionSplineActor(const FObjectInitializer& ObjectInitializer);

};

