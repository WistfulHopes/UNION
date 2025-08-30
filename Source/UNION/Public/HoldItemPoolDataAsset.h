#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHoldItemMeshType.h"
#include "EItemId.h"
#include "HoldItemPoolDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UHoldItemPoolDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHoldItemMeshType, EItemId> PoolItemMap;
    
    UHoldItemPoolDataAsset();

};

