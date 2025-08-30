#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EContentId.h"
#include "EStageId.h"
#include "StageUnlockInfoStruct.h"
#include "StageUnlockInfoDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UStageUnlockInfoDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageUnlockInfoStruct> StageInfoArray;
    
    UStageUnlockInfoDataAsset();

    UFUNCTION(BlueprintCallable)
    bool CheckStageUnreleased(EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    bool CheckStageDLC(EStageId StageId, EContentId& DLCContent);
    
};

