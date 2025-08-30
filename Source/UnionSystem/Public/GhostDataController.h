#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EResponseCodeAbstract.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "EUploadState.h"
#include "GhostDataController.generated.h"

class UGhostResultUploader;
class UGhostUploader;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UGhostDataController : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUploadStateEvent, bool, IsError, EUploadState, UploadState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUploadFinishEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadStateEvent CompleteUpload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadFinishEvent FinishUpload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostUploader* m_ghostUploader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostResultUploader* m_resultUploader;
    
public:
    UGhostDataController();

    UFUNCTION(BlueprintCallable)
    bool StartUpload();
    
    UFUNCTION(BlueprintCallable)
    void SetUploadStageIds(const ESpeedClassId SpeedClass, const TArray<EStageId>& StageIds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStageVersion(const int32& InCurrentStageVersion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGhostDataError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetUploadStageId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpeedClassId GetUploadSpeedClassId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUploadRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUploadMaxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUploadDateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUploadCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResponseCodeAbstract GetResponseCode() const;
    
    UFUNCTION(BlueprintCallable)
    void Deinitialize();
    
    UFUNCTION(BlueprintCallable)
    bool CancelUpload();
    
};

