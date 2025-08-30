#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExternalFileLibrary.generated.h"

UCLASS(Blueprintable)
class UNION_API UExternalFileLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExternalFileLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ReadP4ChangelistFromFile(FString& OutChangeList);
    
};

