#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "UnionPrimaryAssetLabel.h"
#include "UnionStagePrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionStagePrimaryAssetLabel : public UUnionPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageId StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialChunk;
    
    UUnionStagePrimaryAssetLabel();

};

