#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStageId.h"
#include "EStageCourseMainSubMapInfo.h"
#include "EStageCourseMapInfo.h"
#include "StageCourseMapInfo.h"
#include "StageDynamicData.h"
#include "StageTravelRingData.h"
#include "PrimaryStageDataAsset.generated.h"

class USoundAtomCueSheet;
class UWorld;

UCLASS(Blueprintable)
class UNION_API UPrimaryStageDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BGMName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageCourseMainSubMapInfo, FString> SubBGMName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoalJingleSelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> BackgroundLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> PerQualityBackgroundLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDynamicData DefaultBasicLapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDynamicData FinalLapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ObjectItemBoxLevel_Irregular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ObjectDashGateLevel_Irregular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageTravelRingData TravelRingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageCourseMapInfo, FStageCourseMapInfo> CourseMapUIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageCourseMainSubMapInfo, FStageCourseMapInfo> SubCourseMapUIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> CourseCueSheet;
    
    UPrimaryStageDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStageTravelRingData GetTravelRingData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStageDynamicData GetFinalLapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStageDynamicData GetDefaultBasicLapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBackgroundLevels(TArray<TSoftObjectPtr<UWorld>>& OutBackgroundLevels) const;
    
    UFUNCTION(BlueprintCallable)
    void AutoSet();
    
};

