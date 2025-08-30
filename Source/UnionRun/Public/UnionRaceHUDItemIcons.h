#pragma once
#include "CoreMinimal.h"
#include "EUnionRaceHUDItemIconsState.h"
#include "UnionRaceHUDItemIcons.generated.h"

class URaceUISubItemIcon;

USTRUCT(BlueprintType)
struct FUnionRaceHUDItemIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionRaceHUDItemIconsState ItemIconsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUISubItemIcon* ItemIconMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUISubItemIcon* ItemIconSub;
    
    UNIONRUN_API FUnionRaceHUDItemIcons();
};

