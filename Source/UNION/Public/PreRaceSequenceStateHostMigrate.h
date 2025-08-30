#pragma once
#include "CoreMinimal.h"
#include "PreRaceSequenceStateBase.h"
#include "PreRaceSequenceStateHostMigrateExitDelegateDelegate.h"
#include "PreRaceSequenceStateHostMigrate.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateHostMigrate : public UPreRaceSequenceStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreRaceSequenceStateHostMigrateExitDelegate OnExitDelegate;
    
    UPreRaceSequenceStateHostMigrate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLatencyScoreMap(const TMap<FString, int32>& InScoreMap);
    
    UFUNCTION(BlueprintCallable)
    void SetHostCandidateUserId(const TArray<FString>& InUserIdArray);
    
};

