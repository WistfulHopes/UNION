#pragma once
#include "CoreMinimal.h"
#include "SplineMoveObject.h"
#include "SkeletalSplineMoveObject.generated.h"

class UUnionSkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ASkeletalSplineMoveObject : public ASplineMoveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* SkeletalMeshComponent;
    
    ASkeletalSplineMoveObject(const FObjectInitializer& ObjectInitializer);

};

