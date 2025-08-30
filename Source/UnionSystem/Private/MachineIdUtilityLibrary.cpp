#include "MachineIdUtilityLibrary.h"

UMachineIdUtilityLibrary::UMachineIdUtilityLibrary() {
}

bool UMachineIdUtilityLibrary::IsSimpleCustomMachineId(EMachineId InMachineID) {
    return false;
}

bool UMachineIdUtilityLibrary::IsHoverboardMachineId(EMachineId InMachineID) {
    return false;
}

bool UMachineIdUtilityLibrary::IsExtendMachineId(EMachineId InMachineID) {
    return false;
}

bool UMachineIdUtilityLibrary::IsCustomMachineId(EMachineId InMachineID) {
    return false;
}

bool UMachineIdUtilityLibrary::IsBasicMachineId(EMachineId InMachineID) {
    return false;
}

bool UMachineIdUtilityLibrary::IsBasicCustomMachineId(EMachineId InMachineID) {
    return false;
}

int32 UMachineIdUtilityLibrary::GetPlayerIndexFromSimpleCustomMachineId(EMachineId InMachineID) {
    return 0;
}

EMachineId UMachineIdUtilityLibrary::GetConvertMachineIdToMachineCustomId(EMachineId InMachineID) {
    return EMachineId::SPD_01;
}

FString UMachineIdUtilityLibrary::BuildMachineSidePartsPath(EMachineId FrontPartsId, EMachineId RearPartsId) {
    return TEXT("");
}

FString UMachineIdUtilityLibrary::BuildHoverboardCenterPartsPath(EMachineId FrontPartsId, EMachineId RearPartsId) {
    return TEXT("");
}


