#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AppCharaOpenData.h"
#include "AppCharaOpenDataAccessor.generated.h"

UCLASS(Blueprintable)
class UNION_API UAppCharaOpenDataAccessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppCharaOpenDataAccessor();

    UFUNCTION(BlueprintCallable)
    static void SetAppCharaOpenData(const FAppCharaOpenData& NewData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAppCharaOpenData(FAppCharaOpenData& OutData);
    
};

