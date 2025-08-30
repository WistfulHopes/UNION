#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollectHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UCollectHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCollectHelper();

    UFUNCTION(BlueprintCallable)
    static FString CollectStringData(const FString& Name, const FString& Suffix, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    static FString CollectScreenShot(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CollectLevelName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CollectCheckEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CollectChangeList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CollectCacheDirectory();
    
    UFUNCTION(BlueprintCallable)
    static FString CollectBytesData(const FString& Name, const FString& Suffix, const TArray<uint8>& Data);
    
};

