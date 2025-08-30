#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionNetRequestTimeManager.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionNetRequestTimeManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDateTime> LastRequestTime;
    
public:
    UUnionNetRequestTimeManager();

    UFUNCTION(BlueprintCallable)
    void SetResponseTimeCompensation(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetResponseTime(const FString& ApiName, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommunicationTimeForError(const FString& ApiName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommunicationTimeCompensation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommunicationTime(const FString& ApiName);
    
    UFUNCTION(BlueprintCallable)
    void ClearCompensationRequestTime();
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
};

