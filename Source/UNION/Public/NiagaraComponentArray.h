#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponentArray.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct UNION_API FNiagaraComponentArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> NiagaraComponents;
    
    FNiagaraComponentArray();
};

