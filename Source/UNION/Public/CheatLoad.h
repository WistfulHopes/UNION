#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatLoad.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatLoad : public UObject {
    GENERATED_BODY()
public:
    UCheatLoad();

    UFUNCTION(BlueprintCallable, Exec)
    void UnloadStageAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadRaceResidentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadMenuResidentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreLoadStageAssets(int32 StageId1, int32 StageId2, int32 StageID3);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreLoadOceanStageAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreLoadAnotherStageAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadRaceResidentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMenuResidentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadGameResidentAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadGameAndMenuResidentAndPreloadAssets();
    
};

