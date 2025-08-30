#pragma once
#include "CoreMinimal.h"
#include "EChallengeId.h"
#include "UnionUISceneBase.h"
#include "RaceEndMenuSceneWidgetBase.generated.h"

class UCommonRaceMenuContentsInfo;
class UUnionChallengeManager;
class UUnionUIButtonsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuSceneWidgetBase : public UUnionUISceneBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonRaceMenuContentsInfo* ContentsInfo_;
    
public:
    URaceEndMenuSceneWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupChallengeNotice(UUnionChallengeManager* ChallengeManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChallengeProgress(EChallengeId ChallengeId, int32 WindowIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChallengeClear(EChallengeId ChallengeId, int32 WindowIdx);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAcceptKeyIgnored(bool Ignored);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayChallengeProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayChallengeClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContentsBuildingRequested();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonRaceMenuContentsInfo* GetContentsInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUIButtonsPanel* GetButtonsPanel();
    
public:
    UFUNCTION(BlueprintCallable)
    void BuildContents(const UCommonRaceMenuContentsInfo* InContentsInfo);
    
};

