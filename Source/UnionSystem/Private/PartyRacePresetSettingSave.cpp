#include "PartyRacePresetSettingSave.h"

FPartyRacePresetSettingSave::FPartyRacePresetSettingSave() {
    this->PartyRacePresetType = EPartyRacePreset::Casual;
    this->SpeedClass = ESpeedClassId::NormalSpeed;
    this->MenuSpeedClassId = EMenuSpeedClassId::NormalSpeed;
    this->GroupSetting = ERaceSettingGrouping::Individual;
    this->MatchRule = ERaceSettingMatchRule::Point;
    this->RaceCountIndex = 0;
    this->TopPointSettlementIndex = 0;
    this->raceCount = 0;
    this->TopPointSettlement = 0;
    this->ComSpeed = ERaceSettingComSpeed::NothingCom;
    this->Handicap = ERaceSettingHandicap::NothingHandicap;
    this->ItemAppearanceRule = ERaceSettingItemAppearanceRule::Normal;
    this->CourseSelecting = ERaceSettingCourseSelecting::EveryTimeManualSelect;
    this->IrregularSetting = ECustomRaceIrregularSetting::Nothing;
    this->PointUpChance = ECustomRaceSettingPointUpChance::Enable;
    this->MCEvent = ERaceSettingSpecialMCEvent::Disable;
    this->MCEventDataId = 0;
    this->TravelCourseChange = EMCEventTravelCourseChange::None;
    this->IrregularGate = EMCEventIrregularGate::None;
    this->GadgetUsing = ERaceSettingSpecialGadgetUsing::EnableGadget;
    this->AutoGetItem = ERaceSettingSpecialAutoGetItem::DisableAutoItemGet;
    this->RingLost = ECustomRaceRingLostSetting::Few;
    this->TripleCourse = ECustomRaceTripleCourseSetting::Enable;
    this->ObjectPlacementType = EObjectPlacementType::Common;
    this->FestaRaceRule = EFestaRaceRule::NoFesta;
    this->GroupRaceRule = EGroupRaceRule::None;
    this->RaceBonus = ERaceBonus::None;
    this->GoalPoint = ERaceSettingGoalPoint::Normal;
}

