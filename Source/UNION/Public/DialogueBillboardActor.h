#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogueBillboardActor.generated.h"

class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class UNION_API ADialogueBillboardActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
public:
    ADialogueBillboardActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ChangeTexture(TSoftObjectPtr<UTexture2D> NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMaterial(TSoftObjectPtr<UMaterialInterface> NewMaterial);
    
};

