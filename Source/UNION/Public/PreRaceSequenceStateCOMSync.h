#pragma once
#include "CoreMinimal.h"
#include "PreRaceSeqCOMSyncExitDelegateDelegate.h"
#include "PreRaceSequenceStateBase.h"
#include "PreRaceSequenceStateCOMSync.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateCOMSync : public UPreRaceSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreRaceSeqCOMSyncExitDelegate OnExitDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DriverDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MachineDataTable;
    
public:
    UPreRaceSequenceStateCOMSync(const FObjectInitializer& ObjectInitializer);

};

