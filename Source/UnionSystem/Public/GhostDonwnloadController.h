#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EResponseCodeAbstract.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ReplaySaveInfo.h"
#include "GhostDonwnloadController.generated.h"

class UGhostDownloader;

UCLASS(Blueprintable)
class UNIONSYSTEM_API AGhostDonwnloadController : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownloadFinishEvent, bool, OutIsError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDownloadErrorDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadFinishEvent FinishDownload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDownloadErrorDelegate FailedDownload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostDownloader* m_ghostDownloader;
    
public:
    AGhostDonwnloadController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartDownload(const FString& UserId, const ESpeedClassId SpeedClass, const EStageId StageId, const FString& DateTime, const int32& StageVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostDownloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResponseCodeAbstract GetResponseCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownloadRate();
    
    UFUNCTION(BlueprintCallable)
    bool ConvertGhostData(FReplaySaveInfo& OutGhostData);
    
    UFUNCTION(BlueprintCallable)
    bool CancelDownload();
    
};

