#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContentItem.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "EGameModeId.h"
#include "EMachineAuraId.h"
#include "EMachineHornType.h"
#include "EMachineId.h"
#include "ContentsItemHelper.generated.h"

UCLASS(Blueprintable)
class UNION_API UContentsItemHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UContentsItemHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUnlockItemList(TArray<FContentItem>& CheckItemList);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsStickerReleased(int32 stickerId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsMachineReleased(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsItemReleased(FContentItem CheckItem, bool& IsReleased);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsHornReleased(EMachineHornType hornId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsHonorTitleReleased(int32 HonorTitleId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsGadgetReleased(EGadgetId gadgetId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsCharacterReleased(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsAuraReleased(EMachineAuraId AuraId);
    
    UFUNCTION(BlueprintCallable)
    static void GetCanUseItemList(EGameModeId GameModeID, TArray<FContentItem>& CheckItemList);
    
    UFUNCTION(BlueprintCallable)
    static void GetCanUseDLCStageList(TArray<FContentItem>& CheckItemList);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceGetIsMachineReleased(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGetIsItemReleased(FContentItem CheckItem, bool& IsReleased);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceGetIsHonorTitleReleased(int32 HonorTitleId);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceGetIsGadgetReleased(EGadgetId gadgetId);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceGetIsCharacterReleased(EDriverId DriverId);
    
};

