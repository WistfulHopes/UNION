#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EItemId.h"
#include "EItemInfoType.h"
#include "EItemThrowDirection.h"
#include "ItemSet.h"
#include "UnionItemInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionItemInfoInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionItemInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeUseItemEvent(int32 RacerIndex, EItemId ItemId, EItemThrowDirection ThrowType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeUpgradeEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeTakePackageRingEvent(int32 RacerIndex, int32 InRingNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeStartShuffleItemEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeStartLotteryItemEvent(int32 RacerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeStartLostItemEvent(int32 RacerIndex, EItemId ItemId, EItemInfoType ItemInfoType, int32 LostItemCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeStartIrregularCharging(int32 RacerIndex, EItemId ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeResultLotteryItemEvent(int32 RacerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeRefreshEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeItemStockTradeEvent(int32 RacerIndex, const FItemSet& PrevItemSet, const FItemSet& NewItemSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeHoldItemEvent(int32 RacerIndex, EItemId ItemId, EItemThrowDirection DefaultThrowDirection, bool bGadgetLuckyItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeExchangeIrregularHoldItem(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeEndLostItemEvent(int32 RacerIndex, EItemId ItemId, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeEndItemEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeEndIrregularCharging(int32 RacerIndex, EItemId ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeDecreaseUsableTimesEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeClearItemEvent(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NoticeChangeThrowDirectionEvent(int32 RacerIndex, EItemId ItemId, EItemThrowDirection ThrowType);
    
};

