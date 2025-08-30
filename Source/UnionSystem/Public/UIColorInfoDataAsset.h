#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGroupColorId.h"
#include "UIColorInfo.h"
#include "UIColorInfoData.h"
#include "UIColorInfoDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUIColorInfoDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UIColorInfoDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGroupColorId, FUIColorInfoData> UIColorInfoDataMap;
    
    UUIColorInfoDataAsset();

    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    FUIColorInfo GetUIColorInfo(EGroupColorId colorId);
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

