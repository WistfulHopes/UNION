#pragma once
#include "CoreMinimal.h"
#include "ItemObjectBase.h"
#include "ItemTimeBombObject.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AItemTimeBombObject : public AItemObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_staticMeshComponent;
    
    AItemTimeBombObject(const FObjectInitializer& ObjectInitializer);

};

