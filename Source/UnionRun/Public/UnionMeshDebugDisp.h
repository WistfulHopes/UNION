#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionMeshDebugDisp.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionMeshDebugDisp : public AActor {
    GENERATED_BODY()
public:
    AUnionMeshDebugDisp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GenerateStaticMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent);
    
};

