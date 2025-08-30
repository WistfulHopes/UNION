#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TransferCompleteDetailDelegateDelegate.h"
#include "TransferProgressDelegateDelegate.h"
#include "GhostUploader.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UGhostUploader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransferCompleteDetailDelegate m_completeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransferProgressDelegate m_progressDelegate;
    
public:
    UGhostUploader();

private:
    UFUNCTION(BlueprintCallable)
    void OnProgressDelegate(int32 Length, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteDelegate(int32 ResCode, int32 ContentLength, float ElapsedTime, bool bIsError);
    
};

