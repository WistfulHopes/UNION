#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ReplaySaveInfo.h"
#include "GhostSubSystem.generated.h"

class UGhostDebugMenu;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UGhostSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostDebugMenu* m_GhostDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplaySaveInfo m_DownloadGhostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CurrentUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedClassId m_CurrentSpeedClassId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId m_CurrentStageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CurrentDateTime;
    
public:
    UGhostSubSystem();

    UFUNCTION(BlueprintCallable)
    void SetGhostRequestFailed(bool InFailed);
    
    UFUNCTION(BlueprintCallable)
    void SetDownloadGhostData(const FString& InUserId, const ESpeedClassId InSpeedClass, const EStageId InStageId, const FString& InDateTime, const FReplaySaveInfo& InGhostData);
    
    UFUNCTION(BlueprintCallable)
    void ResetDownloadGhostData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSanitize(bool bSuccess, const FString& SanitizeMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostRequestFailed() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckCachedGhostDataUserMatch(const FString& InUserId, const ESpeedClassId InSpeedClass, const EStageId InStageId, const FString& InDateTime);
    
};

