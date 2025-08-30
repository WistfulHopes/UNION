#include "UnionVehicleRaceInput.h"

FUnionVehicleRaceInput::FUnionVehicleRaceInput() {
    this->OnSteerInput = 0.00f;
    this->OnPitchInput = 0.00f;
    this->OnAccelInput = 0.00f;
    this->OnBrakeInput = 0.00f;
    this->OnTrickXInput = 0.00f;
    this->OnTrickX2Input = 0.00f;
    this->OnTrickYInput = 0.00f;
    this->OnTrickY2Input = 0.00f;
    this->OnDriftPressed = false;
    this->OnDriftReleased = false;
    this->OnDrifting = false;
    this->OnUseItemPressed = false;
    this->OnUseItemReleased = false;
    this->OnUseIteming = false;
    this->OnTradeItemPressed = false;
    this->OnRearViewPressed = false;
    this->OnRearViewReleased = false;
    this->OnRearViewing = false;
    this->OnEmotePressed = false;
    this->OnEmoteReleased = false;
    this->OnEmoting = false;
    this->OnHornPressed = false;
    this->OnHornReleased = false;
    this->OnHorning = false;
    this->OnPausePressed = false;
    this->OnPauseReleased = false;
    this->OnPausing = false;
}

