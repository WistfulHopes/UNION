#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMovieFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetMovieList();
    
};

