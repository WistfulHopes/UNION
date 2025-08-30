#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EComLotteryRateDataTableType.h"
#include "EComPointDistanceTableType.h"
#include "EDriverId.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserGadgetData.h"
#include "ComUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UComUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UComUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void LotteryDrawComMachinePartsIds(EMachineId FrontPartsId, EMachineId& RearPartsId, EMachineId& TirePartsId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableUseComMachineId(EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDriverMachineCombination(EDriverId DriverId, EMachineId MachineId);
    
    UFUNCTION(BlueprintCallable)
    static EMachineId GetStaticMeshAllMachineId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMachineIdsCarStatusTypeEqualList(EMachineId MachineId, TArray<EMachineId>& OutEnableMachineIdArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLotteryDrawFakeComNameId(TArray<int32>& InOutFakeComNameIdArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLotteryDrawFakeComName(TArray<int32>& InOutFakeComNameIdArray, FText& OutFakeComName);
    
    UFUNCTION(BlueprintCallable)
    static void GetLotteryDrawComMachineIds(int32 LotteryNum, TArray<EMachineId>& EnableMachineIdArray, TArray<EMachineId>& OutLotteryMachineIdArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetLotteryDrawComDriverIds(int32 LotteryNum, TArray<EDriverId>& EnableDriverIdArray, TArray<EDriverId>& OutLotteryDriverIdArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetFakeComNameIds(TArray<int32>& OutFakeComNameIdArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFakeComName(int32 FakeComNameId, FText& OutFakeComName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableUseComMachineIdsFull(int32 MinMachineIdNum, TArray<EMachineId>& OutMachineIdArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableUseComMachineIds(int32 MinMachineIdNum, const TArray<EMachineId>& DisableMachineIdArray, TArray<EMachineId>& OutMachineIdArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableUseComMachineColorPresetIds(TArray<EMachineColorPresetId>& OutMachineColorPresetIdArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableUseComDriverIds(int32 MinDriverIdNum, bool IsStaticMeshAll, const TArray<EDriverId>& DisableDriverIdArray, TArray<EDriverId>& OutDriverIdArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetComLv(int32& OutCOMLv, EComLotteryRateDataTableType& OutItemRateTableType, EComPointDistanceTableType& OutItemDistanceTableType);
    
    UFUNCTION(BlueprintCallable)
    static void GetComGadgetData(bool IsRival, TArray<FUserGadgetData>& OutUserGadgetData);
    
    UFUNCTION(BlueprintCallable)
    static bool ExcludeUsedFakeComNameId(FText& UseComName, TArray<int32>& InOutFakeComNameIdArray);
    
};

