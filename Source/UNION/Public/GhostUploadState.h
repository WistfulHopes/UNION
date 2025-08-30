#pragma once
#include "CoreMinimal.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "MenuSequenceSubStateBase.h"
#include "GhostUploadState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGhostUploadState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideGhostUpload);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGhostUpload GoToGhostSelectDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId m_SelectedStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId m_SelectedSpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStartConfimationState;
    
public:
    UGhostUploadState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RequestStartGhostLoad(EStageId SelectedStageId, ESpeedClassId SpeedClassId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostLoadCompleted();
    
};

