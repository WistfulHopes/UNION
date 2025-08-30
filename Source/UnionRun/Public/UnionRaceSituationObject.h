#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionRaceSituationObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceSituationObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeadingRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadingRateDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeadingDistDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowingRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowingRatioDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowingDistDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float rivalDistDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float oddNumRankSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamEnergyCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInFootCutRing;
    
public:
    UUnionRaceSituationObject();

    UFUNCTION(BlueprintCallable)
    void SetTeamEnergyCharging(bool bCharging);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalDistDiff(float NewRivalDistDiff);
    
    UFUNCTION(BlueprintCallable)
    void SetRank(int32 NewRank);
    
    UFUNCTION(BlueprintCallable)
    void SetPrevRank(int32 NewRank);
    
    UFUNCTION(BlueprintCallable)
    void SetOddNumRankSeconds(float NewOddNumRankSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadingRatioDiff(float leadingDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadingRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLeadingDistDiff(float leadingDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowingRatioDiff(float followingDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowingRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFollowingDistDiff(float followingDistance);
    
    UFUNCTION(BlueprintCallable)
    bool IsTeamEnergyCharging();
    
    UFUNCTION(BlueprintCallable)
    bool IsFootCutting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRivalDistDiff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrevRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOddNumRankSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeadingRatioDiff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLeadingRacerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeadingDistDiff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFollowingRatioDiff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFollowingRacerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFollowingDistDiff() const;
    
};

