#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameMode.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayStartDay[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPlayTime[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPlayCount[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyPlayTime[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyPlayCount[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModePlayStartDay[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Sequence;
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameMode();
};

