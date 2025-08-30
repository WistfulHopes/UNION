#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AppRaceEventGoalData.h"
#include "UnionRaceBGMLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionRaceBGMLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRaceBGMLibrary();

    UFUNCTION(BlueprintCallable)
    static bool Stop();
    
    UFUNCTION(BlueprintCallable)
    static bool SetVolume(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGoalStageSelectorLabel(const FString& InGoalStageSelectorLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAisacGateDistanceSecondLapToFinalLap(float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAisacGateDistanceFirstLapToSecondLap(float Value);
    
    UFUNCTION(BlueprintCallable)
    static bool RaceBGMFinished();
    
    UFUNCTION(BlueprintCallable)
    static bool PlayPreFirstLapWhenAnotherTimeTrial(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayOnCourseEditor(const FString& Label, bool bFinalLap);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayIntro(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayGoalWithParam(const FAppRaceEventGoalData& InGoalParam);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayFirstLap(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeTransitionToDomainSubInSecondLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeTransitionToDomainSubInFirstLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeTransitionToDomainSubInFinalLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeSecondLapForce(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeSecondLap(bool bRandomCourse);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeReturnFromDomainSubInSecondLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeReturnFromDomainSubInFirstLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeReturnFromDomainSubInFinalLap();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeGateSelect();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeGateDecide(const FString& Label, bool bRandomCourse);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeFirstLapWhenAnotherTimeTrial();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeFinalLapWhenTimeTrial(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeFinalLapLast();
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeFinalLapForce(const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeFinalLap(const FString& Label);
    
};

