#pragma once
#include "CoreMinimal.h"
#include "UnionCourseObjectBase.h"
#include "DroppedObjectBase.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ADroppedObjectBase : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    ADroppedObjectBase(const FObjectInitializer& ObjectInitializer);

};

