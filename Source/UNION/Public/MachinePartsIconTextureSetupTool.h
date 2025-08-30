#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MachinePartsIconTextureSetupTool.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNION_API UMachinePartsIconTextureSetupTool : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MachinePartsDataTable;
    
    UMachinePartsIconTextureSetupTool();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

