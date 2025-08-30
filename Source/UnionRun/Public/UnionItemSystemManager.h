#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EItemId.h"
#include "CreateItemInfo.h"
#include "UnionItemSystemManager.generated.h"

class ADroppedItemBoxFactory;
class AItemBootDataObject;
class AItemLotteryObject;
class UDebugItemMenu;
class UItemObjectLayer;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionItemSystemManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, UItemObjectLayer*> m_itemObjLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreateItemInfo> m_createItemQueueList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemId, int32> m_exclusiveCreateItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemLotteryObject* m_lotteryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AItemBootDataObject* m_bootDataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADroppedItemBoxFactory* m_droppedItemBoxFactory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> m_attackItemObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugItemMenu* m_dbgMenu;
    
public:
    UUnionItemSystemManager();

    UFUNCTION(BlueprintCallable)
    void DbgDrawSwitch();
    
};

