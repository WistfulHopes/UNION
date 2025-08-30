#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "DriverData.h"
#include "DriverDataUtilityLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UNION_API UDriverDataUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDriverDataUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UnloadDriverVoice();
    
    UFUNCTION(BlueprintCallable)
    static bool LoadDriverVoice();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSkinDriverId(const EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void InitUserDriverData();
    
    UFUNCTION(BlueprintCallable)
    static void GetSkinDriverIdArray(const EDriverId InDriverId, const bool bInCheckSelectable, TArray<EDriverId>& OutSkinDriverIdArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkinCharaSelectIndexArray(const int32 InCharaSelectIndex, const bool bInCheckSelectable, TArray<int32>& OutSkinCharaSelectIndexArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetOriginalDriverId(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDriverNameText(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetDriverIdByCharaSelectIndex(int32 InCharaSelectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetDriverIconSoftTexture2D(EDriverId DriverId, bool IsRival);
    
    UFUNCTION(BlueprintCallable)
    static void GetDriverData(const EDriverId InDriverId, FDriverData& OutDriverData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharaSelectIndexByDriverId(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, EDriverId> DownSortIntDriverIdMap(TMap<int32, EDriverId> Map);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAllDriverSelectable(bool bSetNewFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckNewSkinExist(const EDriverId InDriverId);
    
};

