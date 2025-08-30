#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionDateTime.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionDateTime : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionDateTime();

    UFUNCTION(BlueprintPure)
    static int64 ToUnixTimestamp();
    
    UFUNCTION(BlueprintCallable)
    static void SetServerTime(const FDateTime& InServerTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionYear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetUnionUtcNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionSecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetUnionNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionMonth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionMinute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionMillisecond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionHour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUnionDay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime GetServerTime();
    
    UFUNCTION(BlueprintCallable)
    static FDateTime FromUnixTimestamp(int64 UnixTime);
    
};

