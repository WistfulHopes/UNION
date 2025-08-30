#pragma once
#include "CoreMinimal.h"
#include "EVehicleSpecialStatusType.h"
#include "MachineBaseComponent.h"
#include "MachineMaterialComponent.generated.h"

class UDataTable;
class UFreshlyPaintData;
class UMaterialPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineMaterialComponent : public UMachineBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaterialAnimationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFreshlyPaintData* FreshlyPaintColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialPlayerComponent* MaterialPlayerComponent;
    
public:
    UMachineMaterialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
};

