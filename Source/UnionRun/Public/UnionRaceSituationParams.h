#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FootCutParams.h"
#include "UnionRaceSituationParams.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceSituationParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootCutEnable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootCutParams FootCutParams[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoItemUseSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespotDiffSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectConflictDistance;
    
    UUnionRaceSituationParams();

};

