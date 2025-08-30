#pragma once
#include "CoreMinimal.h"
#include "AttackedInfo.h"
#include "EVehicleSpecialStatusType.h"
#include "EItemId.h"
#include "EItemThrowDirection.h"
#include "MachineSoundBaseComponent.h"
#include "MachineSoundComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineSoundComponent : public UMachineSoundBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurfaceSoundDataTable;
    
    UMachineSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventInt(const int32& EventId, const int32& Value);
    
    UFUNCTION(BlueprintCallable)
    void VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value);
    
};

