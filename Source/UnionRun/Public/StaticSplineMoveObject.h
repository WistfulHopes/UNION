#pragma once
#include "CoreMinimal.h"
#include "SplineMoveObject.h"
#include "StaticSplineMoveObject.generated.h"

class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AStaticSplineMoveObject : public ASplineMoveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    AStaticSplineMoveObject(const FObjectInitializer& ObjectInitializer);

};

