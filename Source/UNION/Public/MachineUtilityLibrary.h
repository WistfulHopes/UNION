#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECarStatusType.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMachineColorArea.h"
#include "EMachinePartsSize.h"
#include "MachineColorParam.h"
#include "MachineGlowParam.h"
#include "MachinePartsData.h"
#include "MachineSurfaceParam.h"
#include "MachineUtilityLibrary.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class UNION_API UMachineUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMachineUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowMaterialSection(USkeletalMeshComponent* MeshComponent, FName MaterialSlotName, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetSurfaceParameter(UMaterialInstanceDynamic* Mid, const FMachineSurfaceParam& Param, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable)
    static void SetStickerTexture(UMaterialInstanceDynamic* Mid, UTexture* StickerTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlowParameter(UMaterialInstanceDynamic* Mid, const FMachineGlowParam& Param);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorParameter(UMaterialInstanceDynamic* Mid, const FMachineColorParam& Param, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidEmissiveTexture(UMaterialInstanceDynamic* Mid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRearUnitIndex(uint8 UnitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFrontUnitIndex(uint8 UnitIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetSidePartsPathByMachineId(EMachineId FrontPartsId, EMachineId RearPartsId, FSoftObjectPath& OutPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetSidePartsPath(ECarStatusType InCarStatusType, int32 InFrontPartsNo, int32 InRearPartsNo, FName ExtndName, FSoftObjectPath& OutPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetRootPath(FName ExtndName, FString& OutPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetIdsByRacerIndex(int32 InRacerIndex, TArray<FPrimaryAssetId>& OutPrimaryAssetIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetIdsByCustomizeData(const FUserMachineCustomizeData& MachineCustomizeData, TArray<FPrimaryAssetId>& OutPrimaryAssetIds);
    
    UFUNCTION(BlueprintCallable)
    static void GetMachinePartsData(EMachineId InMachineID, FMachinePartsData& OutMachinePartsData);
    
    UFUNCTION(BlueprintCallable)
    static void GetExtndName(const FString& FrontPartsName, const FString& RearPartsName, FString& OutExtndName);
    
    UFUNCTION(BlueprintCallable)
    static EMachineColorPresetId GetColorPresetId(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetColorAreaNo(EMachineColorArea ColorArea);
    
    UFUNCTION(BlueprintCallable)
    static void GetCenterPartsPathByMachineId(EMachineId FrontPartsId, EMachineId RearPartsId, FSoftObjectPath& OutPath);
    
    UFUNCTION(BlueprintCallable)
    static void GetCenterPartsPath(int32 InFrontPartsNo, EMachinePartsSize InFrontPartsSize, int32 InRearPartsNo, EMachinePartsSize InRearPartsSize, FName ExtndName, FSoftObjectPath& OutPath);
    
    UFUNCTION(BlueprintCallable)
    static void ConvPartsNo(EMachineId MachineId, int32 InFrontPartsNo, int32 InRearPartsNo, int32& OutFrontPartsNo, int32& OutRearPartsNo, bool& bUseCommonSideParts);
    
};

