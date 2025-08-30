#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UserTimeTrialRaceData.h"
#include "UnionUISceneBase.h"
#include "TimeTrialGhostSelect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UTimeTrialGhostSelect : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TargetTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserTimeTrialRaceData TimeTrialRaceData;
    
    UTimeTrialGhostSelect();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SubModeSetup(const EStageId InStageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetTimeClear(EStageId StageId);
    
};

