#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AppTimeSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppTimeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDateTime> NamedDateTime;
    
public:
    UAppTimeSubsystem();

    UFUNCTION(BlueprintCallable)
    void LogTimeSpanMillisecondsByNamedDateTimes(const FName& InBeginTimeName, const FName& InEndTimeName);
    
    UFUNCTION(BlueprintCallable)
    bool GetTimeSpanMillisecondsByNamedDateTimes(const FName& InBeginTimeName, const FName& InEndTimeName, int32& OutTimeSpan);
    
    UFUNCTION(BlueprintCallable)
    void AddNamedDateTimeNow(const FName& InTimeName);
    
};

