#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionNavLoader.generated.h"

UCLASS(Blueprintable)
class AUnionNavLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExportSplineActor;
    
    AUnionNavLoader(const FObjectInitializer& ObjectInitializer);

};

