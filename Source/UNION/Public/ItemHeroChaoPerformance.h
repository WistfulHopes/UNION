#pragma once
#include "CoreMinimal.h"
#include "ItemPerformanceBase.h"
#include "ItemHeroChaoPerformance.generated.h"

class UAtomComponent;
class UNiagaraComponent;

UCLASS(Blueprintable)
class UNION_API AItemHeroChaoPerformance : public AItemPerformanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* HeroChaoNiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* HeroChaoSoundComponent;
    
    AItemHeroChaoPerformance(const FObjectInitializer& ObjectInitializer);

};

