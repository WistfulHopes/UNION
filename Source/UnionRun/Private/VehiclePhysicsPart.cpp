#include "VehiclePhysicsPart.h"

FVehiclePhysicsPart::FVehiclePhysicsPart() {
    this->VehicleType = EVehicleType::VehicleTypeCar;
    this->CarStatusType = ECarStatusType::CarStatusSpeed;
    this->WheelBase = 0.00f;
    this->WheelBase_F = 0.00f;
    this->WheelBase_R = 0.00f;
    this->Tread = 0.00f;
    this->WheelShaftHeight = 0.00f;
    this->TireRadius = 0.00f;
    this->TireWidth = 0.00f;
    this->BodyLength = 0.00f;
    this->BodyWidth = 0.00f;
    this->BodyBottomHeight = 0.00f;
    this->CockpitHeight = 0.00f;
    this->SuspensionOperatingRange = 0.00f;
    this->CollisionRadius = 0.00f;
    this->CharaCollisionRadius = 0.00f;
    this->CollisionPivot_F = 0.00f;
    this->CollisionPivot_R = 0.00f;
    this->CollisionBaseHeight = 0.00f;
    this->CollisionPivotHeight = 0.00f;
    this->CollisionHeightLength = 0.00f;
}

