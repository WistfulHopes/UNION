#include "ComUtilityLibrary.h"

UComUtilityLibrary::UComUtilityLibrary() {
}

void UComUtilityLibrary::LotteryDrawComMachinePartsIds(EMachineId FrontPartsId, EMachineId& RearPartsId, EMachineId& TirePartsId) {
}

bool UComUtilityLibrary::IsEnableUseComMachineId(EMachineId MachineId) {
    return false;
}

bool UComUtilityLibrary::IsDriverMachineCombination(EDriverId DriverId, EMachineId MachineId) {
    return false;
}

EMachineId UComUtilityLibrary::GetStaticMeshAllMachineId(EDriverId DriverId) {
    return EMachineId::SPD_01;
}

bool UComUtilityLibrary::GetMachineIdsCarStatusTypeEqualList(EMachineId MachineId, TArray<EMachineId>& OutEnableMachineIdArray) {
    return false;
}

int32 UComUtilityLibrary::GetLotteryDrawFakeComNameId(TArray<int32>& InOutFakeComNameIdArray) {
    return 0;
}

bool UComUtilityLibrary::GetLotteryDrawFakeComName(TArray<int32>& InOutFakeComNameIdArray, FText& OutFakeComName) {
    return false;
}

void UComUtilityLibrary::GetLotteryDrawComMachineIds(int32 LotteryNum, TArray<EMachineId>& EnableMachineIdArray, TArray<EMachineId>& OutLotteryMachineIdArray) {
}

void UComUtilityLibrary::GetLotteryDrawComDriverIds(int32 LotteryNum, TArray<EDriverId>& EnableDriverIdArray, TArray<EDriverId>& OutLotteryDriverIdArray) {
}

void UComUtilityLibrary::GetFakeComNameIds(TArray<int32>& OutFakeComNameIdArray) {
}

bool UComUtilityLibrary::GetFakeComName(int32 FakeComNameId, FText& OutFakeComName) {
    return false;
}

bool UComUtilityLibrary::GetEnableUseComMachineIdsFull(int32 MinMachineIdNum, TArray<EMachineId>& OutMachineIdArray) {
    return false;
}

bool UComUtilityLibrary::GetEnableUseComMachineIds(int32 MinMachineIdNum, const TArray<EMachineId>& DisableMachineIdArray, TArray<EMachineId>& OutMachineIdArray) {
    return false;
}

bool UComUtilityLibrary::GetEnableUseComMachineColorPresetIds(TArray<EMachineColorPresetId>& OutMachineColorPresetIdArray) {
    return false;
}

bool UComUtilityLibrary::GetEnableUseComDriverIds(int32 MinDriverIdNum, bool IsStaticMeshAll, const TArray<EDriverId>& DisableDriverIdArray, TArray<EDriverId>& OutDriverIdArray) {
    return false;
}

void UComUtilityLibrary::GetComLv(int32& OutCOMLv, EComLotteryRateDataTableType& OutItemRateTableType, EComPointDistanceTableType& OutItemDistanceTableType) {
}

void UComUtilityLibrary::GetComGadgetData(bool IsRival, TArray<FUserGadgetData>& OutUserGadgetData) {
}

bool UComUtilityLibrary::ExcludeUsedFakeComNameId(FText& UseComName, TArray<int32>& InOutFakeComNameIdArray) {
    return false;
}


