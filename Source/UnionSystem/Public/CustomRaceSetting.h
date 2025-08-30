#pragma once
#include "CoreMinimal.h"
#include "ECustomRaceIrregularSetting.h"
#include "ECustomRaceRingLostSetting.h"
#include "ECustomRaceSettingPointUpChance.h"
#include "ECustomRaceThornBallType.h"
#include "ECustomRaceTripleCourseSetting.h"
#include "EFestaRaceRule.h"
#include "EGroupColorId.h"
#include "EGroupRaceRule.h"
#include "EMCEventIrregularGate.h"
#include "EMCEventTravelCourseChange.h"
#include "EMachineColorPresetId.h"
#include "EObjectPlacementType.h"
#include "ERaceBonus.h"
#include "ERaceMirrorSetting.h"
#include "ERaceSettingComSpeed.h"
#include "ERaceSettingCourseSelecting.h"
#include "ERaceSettingGoalPoint.h"
#include "ERaceSettingGroupMode.h"
#include "ERaceSettingGrouping.h"
#include "ERaceSettingHandicap.h"
#include "ERaceSettingItemAppearanceRule.h"
#include "ERaceSettingMatchRule.h"
#include "ERaceSettingSpecialAutoGetItem.h"
#include "ERaceSettingSpecialGadgetUsing.h"
#include "ERaceSettingSpecialMCEvent.h"
#include "ESpeedClassId.h"
#include "ItemSwitchSetting.h"
#include "CustomRaceSetting.generated.h"

USTRUCT(BlueprintType)
struct FCustomRaceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId SpeedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceMirrorSetting RaceMirrorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGrouping GroupSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGroupMode GroupMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EGroupColorId> GroupIdGroupColorIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EMachineColorPresetId> GroupIdMachineColorPresetIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingMatchRule MatchRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 raceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopPointSettlement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingComSpeed ComSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingHandicap Handicap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingItemAppearanceRule ItemAppearanceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingCourseSelecting CourseSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingSpecialMCEvent MCEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MCEventSwitchArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCEventDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMCEventTravelCourseChange TravelCourseChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMCEventIrregularGate IrregularGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingSpecialGadgetUsing GadgetUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingSpecialAutoGetItem AutoGetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSwitchSetting ItemSwitchSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceIrregularSetting CustomRaceIrregularSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceSettingPointUpChance CustomRaceSettingPointUpChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceRingLostSetting CustomRaceRingLostSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceTripleCourseSetting CustomRaceTripleCourseSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectPlacementType ObjectPlacementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFestaRaceRule FestaRaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule GroupRaceRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceThornBallType ThornBallType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceBonus RaceBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingGoalPoint GoalPoint;
    
    UNIONSYSTEM_API FCustomRaceSetting();
};

