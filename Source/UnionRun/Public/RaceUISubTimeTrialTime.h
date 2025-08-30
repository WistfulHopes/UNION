#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUITimeTrialTime.h"
#include "RaceUISubTimeTrialTime.generated.h"

class UImage;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubTimeTrialTime : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TargetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* PersonalBestText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> NumberArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonalBestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PersonalBestLap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPersonalBestTimeExistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotGhostReplay;
    
    URaceUISubTimeTrialTime();

    UFUNCTION(BlueprintCallable)
    void UpdateTime();
    
    UFUNCTION(BlueprintCallable)
    FRaceUITimeTrialTime UpdateLapTime(int32 Lap, bool& IsBestLap);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityTime();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTime4Best(URichTextBlock* TargetTextBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTime(URichTextBlock* TargetTextBlock, FText TargetName, int32 TargetTime, bool IsClockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetBestTime();
    
};

