#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatSound.generated.h"

UCLASS(Blueprintable)
class UCheatSound : public UObject {
    GENERATED_BODY()
public:
    UCheatSound();

    UFUNCTION(BlueprintCallable, Exec)
    void LoadCuesheet(const FString& CueSheetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDebugCourseNumberBGM(bool& bEnableMain, int32& MainNumber, bool& bEnableAnother, int32& AnotherNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetCourseBGMMain(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetCourseBGMAnother(const FString& InputParam);
    
};

