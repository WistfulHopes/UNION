#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EItemId.h"
#include "EItemThrowDirection.h"
#include "AbsorbedObjectInfo.h"
#include "AbsorberInfo.h"
#include "CyanLaserMoveInfo.h"
#include "EDomainNumber.h"
#include "WarpRingMoveInfo.h"
#include "ItemMessageInterface.generated.h"

UINTERFACE(Blueprintable)
class UItemMessageInterface : public UInterface {
    GENERATED_BODY()
};

class IItemMessageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyWarpTargetEnd(int32 WarpRingAttacRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NotifyWarpTargetBegin(int32 WarpRingAttacRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyWarpRingMoveInfo(const FWarpRingMoveInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyCyanLaserMoveInfo(const FCyanLaserMoveInfo Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAbsorbOject(const FAbsorberInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAbsorbFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWarpTarget(int32 WarpRingAttacRacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemPermanenteStable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemPathType(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemPathRouteForm(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTrapItemOnGroundTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemUniqueID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EItemId GetItemType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EItemThrowDirection GetItemThrowDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetItemPathTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemHolderRacerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDomainNumber GetItemDomainNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetItemActiveTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConfirmAbsorbOject(const FAbsorbedObjectInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CalIsInWithinPlaneArea(FVector Position);
    
};

