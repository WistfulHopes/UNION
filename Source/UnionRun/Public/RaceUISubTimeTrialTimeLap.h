#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUITimeTrialTime.h"
#include "RaceUISubTimeTrialTimeLap.generated.h"

class UBorder;
class UImage;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubTimeTrialTimeLap : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> NumberArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TxtSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TxtDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BaseDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BorderNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BorderDiff;
    
    URaceUISubTimeTrialTimeLap();

    UFUNCTION(BlueprintCallable)
    FRaceUITimeTrialTime UpdateLapTime();
    
    UFUNCTION(BlueprintCallable)
    void SetLapTimeWithDiff(FRaceUITimeTrialTime NewTime, int32 Lap, bool IsVisibleDiff);
    
    UFUNCTION(BlueprintCallable)
    void SetLapTimeIsGhostReplay(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void SetLapTime(FRaceUITimeTrialTime NewTime, int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void SetLapDiffTime(int32 LapNum);
    
};

