#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugOnlineAutoPlaySetting.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDebugOnlineAutoPlaySetting : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugOnlineAutoPlaySetting();

    UFUNCTION(BlueprintCallable)
    static void SetDebugAutoPlayShortRace(bool flg);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugAutoPlayMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugAutoPlay(bool flg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugAutoPlayShortRace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugAutoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugAutoPlayMode();
    
};

