#include "RivalTeamData.h"

FRivalTeamData::FRivalTeamData() {
    this->NumMainMember = 0;
    this->MemberDriverId1 = EDriverId::Sonic;
    this->MemberDriverId2 = EDriverId::Sonic;
    this->MemberDriverId3 = EDriverId::Sonic;
    this->MemberDriverId4 = EDriverId::Sonic;
    this->MemberDriverId5 = EDriverId::Sonic;
    this->MemberDriverId6 = EDriverId::Sonic;
    this->MachineFrontPartId = EMachineId::SPD_01;
    this->MachineRearPartId = EMachineId::SPD_01;
    this->MachineTireId = EMachineId::SPD_01;
    this->MachineColorPresetId = EMachineColorPresetId::ColorPreset01;
    this->TeamLevel = 0;
    this->AppearanceOrder = 0;
    this->RewardWinCount1 = 0;
    this->RewardType1 = ERewardType::GadgetFragment;
    this->NumReward1 = 0;
    this->RewardWinCount2 = 0;
    this->RewardType2 = ERewardType::GadgetFragment;
    this->NumReward2 = 0;
    this->RewardWinCount3 = 0;
    this->RewardType3 = ERewardType::GadgetFragment;
    this->NumReward3 = 0;
}

