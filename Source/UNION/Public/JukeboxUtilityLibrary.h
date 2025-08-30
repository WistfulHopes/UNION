#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JukeboxUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UJukeboxUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJukeboxUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetJukeboxLapBGM(int32 Lap, FString& BGMName, bool& IsFound);
    
};

