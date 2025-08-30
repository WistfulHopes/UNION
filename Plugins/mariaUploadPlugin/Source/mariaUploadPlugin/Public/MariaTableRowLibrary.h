#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MariaTableRow.h"
#include "MariaTableRowLibrary.generated.h"

UCLASS(Blueprintable)
class MARIAUPLOADPLUGIN_API UMariaTableRowLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMariaTableRowLibrary();

    UFUNCTION(BlueprintCallable)
    static void AddString(UPARAM(Ref) FMariaTableRow& Row, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddInt(UPARAM(Ref) FMariaTableRow& Row, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddFloat(UPARAM(Ref) FMariaTableRow& Row, float Value);
    
};

