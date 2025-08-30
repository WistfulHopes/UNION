#include "GroupRaceRuleData.h"

FGroupRaceRuleData::FGroupRaceRuleData() {
    this->GroupRaceRule = EGroupRaceRule::None;
    this->bOverrideItemAppearanceRule = false;
    this->ItemAppearanceRule = ERaceSettingItemAppearanceRule::Normal;
    this->bOverrideIrregular = false;
    this->FixedIrregularId = EIrregularEventId::None;
    this->ItemLotteryCorrectionType = EGroupRaceItemLotteryCorrectionType::None;
    this->EnergyAddBehaviorType = EEnergyAddBehaviorType::UnKnown;
    this->GroupBonusType = EGroupBonusType::UnKnown;
}

