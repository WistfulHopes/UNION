#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUnionRomVersion.h"
#include "UIUtilityLibrary.generated.h"

class UCommonRivalLevelWidget;

UCLASS(Blueprintable)
class UNION_API UUIUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetRivalLevel(UCommonRivalLevelWidget* RivalLevelWidget, const int32 RivalLevel, int32 BaseRivalLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRivalLevel(UCommonRivalLevelWidget* RivalLevelWidget, const int32 RivalLevel, const int32 MaxLevel, const int32 BlackCount, int32 BaseRivalLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenMenuByConditions(bool NotStreamingInstall, bool IsOnlineMode, bool IsOnlineMenu, bool IsSinglePlayer, bool AlreadyGrandPrix1Play, bool IsClearAllGrandPrix, bool IsClearedEnding2, bool IsDisableOnlinePlayByParentalControls, EUnionRomVersion ReleaseVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplayJukeboxsNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplayHonorTitletNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisplayChallengeNewIcon();
    
};

