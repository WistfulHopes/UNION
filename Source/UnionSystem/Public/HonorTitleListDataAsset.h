#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HonorTitleListData.h"
#include "HonorTitleListDataAsset.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UHonorTitleListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HonorTitleCompositeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FHonorTitleListData> HonorTitleTableDataMap;
    
    UHonorTitleListDataAsset();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHonorTitleDLC(int32 HonorTitleIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHonorTitleVBName(int32 HonorTitleId, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHonorTitleRarity(int32 HonorTitleId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetHonorTitlePlate(int32 HonorTitleId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHonorTitleListData> GetAllHonorTitleWithRarity(int32 Rarity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHonorTitleListData> GetAllHonorTitleAndIdWithRarity(int32 Rarity, TArray<int32>& outHonorTitleIdArray) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

