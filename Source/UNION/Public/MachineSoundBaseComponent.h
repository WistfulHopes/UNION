#pragma once
#include "CoreMinimal.h"
#include "EVehicleSound.h"
#include "UnionSurfaceSoundData.h"
#include "MachineBaseComponent.h"
#include "MachineSoundBaseComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineSoundBaseComponent : public UMachineBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleSound, FUnionSurfaceSoundData> SurfaceSoundCueMap;
    
public:
    UMachineSoundBaseComponent(const FObjectInitializer& ObjectInitializer);

};

