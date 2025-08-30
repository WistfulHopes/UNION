#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AppTimeUtil.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppTimeUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppTimeUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UnionDateTimeParse(UPARAM(Ref) FString& DateTimeString, FDateTime& OutDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan Sub_DateTimeDateTime(const FDateTime& A, const FDateTime& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ReplaceDateTimePlaceholder(const FText& BaseText, const FDateTime& StartDateTime, const FDateTime& EndDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MakeDateTimeText(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MakeDateText(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable)
    static void LogTimeSpanMillisecondsByNamedDateTimes(const FName& InBeginTimeName, const FName& InEndTimeName);
    
    UFUNCTION(BlueprintCallable)
    static void AddNamedDateTimeNow(const FName& InTimeName);
    
};

