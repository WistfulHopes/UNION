#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "PrimaryItemDataAsset.generated.h"

class AItemObjectBase;

UCLASS(Blueprintable)
class UNION_API UPrimaryItemDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AItemObjectBase>> ItemObjects;
    
    UPrimaryItemDataAsset();

};

