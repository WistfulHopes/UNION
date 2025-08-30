#include "CustomRaceSetting.h"

FCustomRaceSetting::FCustomRaceSetting() {
    this->SpeedClass = ESpeedClassId::NormalSpeed;
    this->RaceMirrorSetting = ERaceMirrorSetting::Normal;
    this->GroupSetting = ERaceSettingGrouping::Individual;
    this->GroupMode = ERaceSettingGroupMode::Normal;
    this->MatchRule = ERaceSettingMatchRule::Point;
    this->raceCount = 0;
    this->TopPointSettlement = 0;
    this->ComSpeed = ERaceSettingComSpeed::NothingCom;
    this->Handicap = ERaceSettingHandicap::NothingHandicap;
    this->ItemAppearanceRule = ERaceSettingItemAppearanceRule::Normal;
    this->CourseSelecting = ERaceSettingCourseSelecting::EveryTimeManualSelect;
    this->MCEvent = ERaceSettingSpecialMCEvent::Disable;
    this->MCEventDataId = 0;
    this->TravelCourseChange = EMCEventTravelCourseChange::None;
    this->IrregularGate = EMCEventIrregularGate::None;
    this->GadgetUsing = ERaceSettingSpecialGadgetUsing::EnableGadget;
    this->AutoGetItem = ERaceSettingSpecialAutoGetItem::DisableAutoItemGet;
    this->CustomRaceIrregularSetting = ECustomRaceIrregularSetting::Nothing;
    this->CustomRaceSettingPointUpChance = ECustomRaceSettingPointUpChance::Enable;
    this->CustomRaceRingLostSetting = ECustomRaceRingLostSetting::Few;
    this->CustomRaceTripleCourseSetting = ECustomRaceTripleCourseSetting::Enable;
    this->ObjectPlacementType = EObjectPlacementType::Common;
    this->FestaRaceRule = EFestaRaceRule::NoFesta;
    this->GroupRaceRule = EGroupRaceRule::None;
    this->ThornBallType = ECustomRaceThornBallType::Normal;
    this->RaceBonus = ERaceBonus::None;
    this->GoalPoint = ERaceSettingGoalPoint::Normal;
}

