#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DataCollectSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UDataCollectSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDataCollectSubsystem();

    UFUNCTION(BlueprintCallable)
    FString CollectStringData(const FString& Name, const FString& Suffix, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    FString CollectScreenShot(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CollectLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CollectCheckEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CollectChangeList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CollectCacheDirectory();
    
    UFUNCTION(BlueprintCallable)
    FString CollectBytesData(const FString& Name, const FString& Suffix, const TArray<uint8>& Data);
    
};

