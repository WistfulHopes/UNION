#include "BPFL_UnionRunVehicleUtil.h"

UBPFL_UnionRunVehicleUtil::UBPFL_UnionRunVehicleUtil() {
}

bool UBPFL_UnionRunVehicleUtil::IsHoverboard(ECarStatusType InCarStatusType) {
    return false;
}

EMachineId UBPFL_UnionRunVehicleUtil::GetFirstBasicCustomMachineId(ECarStatusType InCarStatusType) {
    return EMachineId::SPD_01;
}

EMachineId UBPFL_UnionRunVehicleUtil::GetDefaultMachineId(ECarStatusType InCarStatusType) {
    return EMachineId::SPD_01;
}

ECarStatusType UBPFL_UnionRunVehicleUtil::GetCarStatusType(EMachineId InMachineID) {
    return ECarStatusType::CarStatusSpeed;
}


