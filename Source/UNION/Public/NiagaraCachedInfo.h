#pragma once
#include "CoreMinimal.h"
#include "NiagaraCachedInfo.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct UNION_API FNiagaraCachedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachComponent;
    
    FNiagaraCachedInfo();
};

