#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PreviewMachineActor.generated.h"

class UAlwaysTickCustomAttrAnimComponent;

UCLASS(Blueprintable)
class UNION_API APreviewMachineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAlwaysTickCustomAttrAnimComponent* CustomAttrAnimComponent;
    
    APreviewMachineActor(const FObjectInitializer& ObjectInitializer);

};

