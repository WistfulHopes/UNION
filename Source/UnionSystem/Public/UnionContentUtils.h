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
#include "EStageId.h"
#include "UnionContentUtils.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionContentUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionContentUtils();

    UFUNCTION(BlueprintCallable)
    static void RequestCheckContent(bool bEnableMasterData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStickerReleased(int32 stickerId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMachineTirePartsReleased(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMachineRearPartsReleased(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMachineFrontPartsReleased(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHornReleased(EMachineHornType hornId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHonorTitleReleased(int32 HonorTitleId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGadgetReleased(EGadgetId gadgetId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterReleased(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBusyCheckContent();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAuraReleased(EMachineAuraId AuraId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUseItemList(EGameModeId GameModeID, const TArray<FContentItem>& CheckItemList, TArray<FContentItem>& UnlockItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetIsItemReleased(FContentItem CheckItem, bool& IsReleased);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseSticker(int32 stickerId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseStageByGameMode(EGameModeId GameModeID, EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseMachine(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseHonorTitle(int32 HonorTitleId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseCharacter(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUseAlbum(int32 AlbumID);
    
};

