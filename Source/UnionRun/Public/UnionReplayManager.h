#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataStatus.h"
#include "UnionReplayManager.generated.h"

class AActor;
class AReplayGhostActor;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionReplayManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplayGhostActor* GoastActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_GhostActor;
    
public:
    UUnionReplayManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadComplete(ESaveDataStatus Status);
    
};

