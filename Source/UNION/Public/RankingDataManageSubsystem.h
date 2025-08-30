#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HttpReceivedDelegateDelegate.h"
#include "TransferCompleteDelegateDelegate.h"
#include "TransferProgressDelegateDelegate.h"
#include "RankingDataManageSubsystem.generated.h"

UCLASS(Blueprintable)
class UNION_API URankingDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHttpReceivedDelegate ReceivedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransferCompleteDelegate DownloadCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransferProgressDelegate DownloadProgressDelegate;
    
public:
    URankingDataManageSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedUrlTimeTrialWorldRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedUrlRankMatchWorldRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedUrlLegendCompeWorldRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedUrlFestaWorldRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedTimeTrialMyRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedRankMatchMyRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedRankMatchFriendRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedFestaMyRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedFestaFriendRanking(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadProgressDelegate(int32 Length, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadCompleteTimeTrialWorldRanking(int32 ResCode, bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadCompleteRankMatchWorldRanking(int32 ResCode, bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadCompleteLegendCompeWorldRanking(int32 ResCode, bool bIsError);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadCompleteFestaWorldRanking(int32 ResCode, bool bIsError);
    
};

