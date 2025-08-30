#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RaceObjectSkeletal.generated.h"

class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ARaceObjectSkeletal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyRoot;
    
    ARaceObjectSkeletal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBodySkeletalMesh(USkeletalMesh* NewSkeletalMesh);
    
};

