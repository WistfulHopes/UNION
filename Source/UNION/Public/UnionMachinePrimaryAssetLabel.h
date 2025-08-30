#pragma once
#include "CoreMinimal.h"
#include "EMachineId.h"
#include "UnionPrimaryAssetLabel.h"
#include "UnionMachinePrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionMachinePrimaryAssetLabel : public UUnionPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMachineId MachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialChunk;
    
    UUnionMachinePrimaryAssetLabel();

};

