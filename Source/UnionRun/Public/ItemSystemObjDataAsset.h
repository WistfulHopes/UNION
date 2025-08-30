#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSystemObjDataAsset.generated.h"

class ADroppedItemBoxFactory;
class AItemBootDataObject;
class AItemLotteryObject;
class AItemOmochaoDroppedRing;
class AItemVioletVoidAbsorbedObject;

UCLASS(Blueprintable)
class UNIONRUN_API UItemSystemObjDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItemLotteryObject> LotteryObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItemBootDataObject> BootDataObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADroppedItemBoxFactory> DroppedItemBoxFactoryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItemOmochaoDroppedRing> OmochaoDroppedRingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItemVioletVoidAbsorbedObject> VioletVoidAbsorbedObjectClass;
    
    UItemSystemObjDataAsset();

};

