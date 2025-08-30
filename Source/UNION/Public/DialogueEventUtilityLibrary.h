#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGrandPrixEventFlag.h"
#include "EEventCondition.h"
#include "DialogueEventUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UDialogueEventUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDialogueEventUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDodonpaEventCondition(EEventCondition Condition, EGrandPrixEventFlag SaveDataFlagId);
    
};

