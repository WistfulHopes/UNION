#pragma once
#include "CoreMinimal.h"
#include "HoverboardBaseActor.h"
#include "HoverboardInRaceActor.generated.h"

class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AHoverboardInRaceActor : public AHoverboardBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* BodyCutRearMeshComponent;
    
    AHoverboardInRaceActor(const FObjectInitializer& ObjectInitializer);

};

