#pragma once
#include "CoreMinimal.h"
#include "EGrandPrixBeatSubTask.generated.h"

UENUM(BlueprintType)
enum EGrandPrixBeatSubTask {
    GrandPrix_Beat_None,
    GrandPrix_Sonic,
    GrandPrix_Tails,
    GrandPrix_Knuckles = 4,
    GrandPrix_Amy = 8,
    GrandPrix_DrEggman = 16,
    GrandPrix_Shadow = 32,
    GrandPrix_Rouge = 64,
    GrandPrix_Silver = 128,
    GrandPrix_Blaze = 256,
    GrandPrix_MetalSonic = 512,
    GrandPrix_Omega = 1024,
    GrandPrix_Vector = 2048,
    GrandPrix_Espio = 4096,
    GrandPrix_Charmy = 8192,
    GrandPrix_Zavok = 16384,
    GrandPrix_Zazz = 32768,
    GrandPrix_Cream = 65536,
    GrandPrix_Big = 131072,
    GrandPrix_Eggpawn = 262144,
    GrandPrix_Sage = 524288,
    GrandPrix_Jet = 1048576,
    GrandPrix_Wave = 2097152,
    GrandPrix_Storm = 4194304,
};

