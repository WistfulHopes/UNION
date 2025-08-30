#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGroupColorId.h"
#include "FestaTeamUIData.h"
#include "FestaUIData.h"
#include "FestaUIDataAsset.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UFestaUIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FestaUIDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFestaUIData> FestaUITableDataMap;
    
public:
    UFestaUIDataAsset();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    bool IsFestaUITableDataTeamUIDataArrayIndexFound(FName RowName, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void GetFestaUITeamUIDataByGroupColorId(int32 TeamId, EGroupColorId GroupColorID, TArray<FFestaTeamUIData>& ArrayData, bool& IsFound);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UTexture2D>> GetFestaUITableSignageTex(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    FFestaTeamUIData GetFestaUITableDataTeamUIDataArrayIndex(FName RowName, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFestaTeamUIData> GetFestaUITableDataTeamUIDataArray(int32 InFestaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFestaUIData(int32 festaId, bool& bFoundData, FFestaUIData& FestaUIData) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

