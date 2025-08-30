#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RewardAchievementData.h"
#include "AppRewardUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UAppRewardUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppRewardUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SaveRewardItemData(const FRewardAchievementData& AchievementData);
    
};

