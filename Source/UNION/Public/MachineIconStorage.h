#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELocalStorageStatus.h"
#include "EMachineId.h"
#include "SaveLoadResult.h"
#include "MachineIconStorage.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNION_API UMachineIconStorage : public UObject {
    GENERATED_BODY()
public:
    UMachineIconStorage();

private:
    UFUNCTION(BlueprintCallable)
    void Subsystem_OnComplete(ELocalStorageStatus InStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveSync(EMachineId InMachineID, UTextureRenderTarget2D* InRenderTexture, SaveLoadResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadSync(EMachineId InMachineID, SaveLoadResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFileName(EMachineId InMachineID, FString& OutFileName) const;
    
};

