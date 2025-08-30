#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turntable.generated.h"

class UTurntableComponent;

UCLASS(Blueprintable)
class ATurntable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTurntableComponent* TurntableComponent;
    
    ATurntable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTurntableComponent* GetTurntableComponent();
    
};

