#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleVATAnimObject.generated.h"

class UUnionVATAnimEventComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ASimpleVATAnimObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATAnimEventComponent* VATAnim;
    
    ASimpleVATAnimObject(const FObjectInitializer& ObjectInitializer);

};

