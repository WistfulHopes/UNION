#pragma once
#include "CoreMinimal.h"
#include "ERaceRunDataType.generated.h"

UENUM(BlueprintType)
enum class ERaceRunDataType : uint8 {
    GroupRaceRunParam,
    ReactionEventParam,
    GadgetParam,
    GroupColorTable_Effect,
    GroupColorTable_Material,
    RunPlane,
    RaceActionTutorial,
    ItemLockOnParam,
    GroupRaceRule,
    TravelRingMainCourseData,
    TravelRingAnotherCourseData,
    RunCamera,
    ComLevelParams,
    RunMachine,
    Situation,
    ItemMiscParam,
    ComDriverTier,
    SwingCamera,
    ItemInfo4System,
    GadgetCRMID,
    ComCommonParams,
    GadgetVariousDefine,
    RaceResultSetting,
    CommonRunParam,
    MenuGroupRaceRule,
    MenuGroupRaceEnergy,
    MenuGroupRaceBonus,
    SlimeInput,
    UseItemUI,
    ItemSystemObjInfo,
    ComResultParams,
    RingMeshData,
    ObjectRandomData,
    BreakObjectRandomData,
    GimmickCurringData,
    Max,
};

