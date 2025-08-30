#pragma once
#include "CoreMinimal.h"
#include "UnionVATSequenceInfo.h"
#include "ETriggerMotionState.h"
#include "GimmickTriggerMotionBase.h"
#include "GimmickTriggerMotionVAT.generated.h"

class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickTriggerMotionVAT : public AGimmickTriggerMotionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* _VATMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ETriggerMotionState, int32> _AnimationIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bUseNoTriggerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bUseEndState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _bIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _PrevPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerMotionState _TriggerMotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETriggerMotionState _PrevTriggerMotionState;
    
public:
    AGimmickTriggerMotionVAT(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateState();
    
    UFUNCTION(BlueprintCallable)
    void OnVATSequence(UUnionVATMeshComponent* VATMeshComponent, const FUnionVATSequenceInfo& SequenceInfo);
    
};

