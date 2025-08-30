#pragma once
#include "CoreMinimal.h"
#include "EDriverId.h"
#include "UnionPrimaryAssetLabel.h"
#include "UnionDriverPrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class UNION_API UUnionDriverPrimaryAssetLabel : public UUnionPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId DriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialChunk;
    
    UUnionDriverPrimaryAssetLabel();

};

