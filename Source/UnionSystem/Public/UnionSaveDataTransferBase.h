#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EResultSearchTrialSaveData.h"
#include "EResultTransferTrialSaveData.h"
#include "UnionSaveDataTransferBase.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AUnionSaveDataTransferBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultSearchTrialSaveData m_ResultSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultTransferTrialSaveData m_ResultTransfer;
    
public:
    AUnionSaveDataTransferBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransferTrialVersionSaveData();
    
    UFUNCTION(BlueprintCallable)
    void SearchTrialVersionSaveData();
    
    UFUNCTION(BlueprintCallable)
    EResultTransferTrialSaveData GetResultTransferTrialVersionSaveData();
    
    UFUNCTION(BlueprintCallable)
    EResultSearchTrialSaveData GetResultSearchTrialVersionSaveData();
    
};

