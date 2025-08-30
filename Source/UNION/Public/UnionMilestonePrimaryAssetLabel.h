#pragma once
#include "CoreMinimal.h"
#include "EMilestoneVersion.h"
#include "UnionPrimaryAssetLabel.h"
#include "UnionMilestonePrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionMilestonePrimaryAssetLabel : public UUnionPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMilestoneVersion MilestoneVersion;
    
    UUnionMilestonePrimaryAssetLabel();

};

