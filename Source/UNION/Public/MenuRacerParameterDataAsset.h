#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "MenuRacerParameterDataAsset.generated.h"

UCLASS(Blueprintable)
class UNION_API UMenuRacerParameterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UMenuRacerParameterDataAsset();

};

