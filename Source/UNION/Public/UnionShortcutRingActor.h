#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionShortcutRingActor.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API AUnionShortcutRingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootScene_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* GateMesh_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WhiteOutMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* WhiteoutEffectMaterial_;
    
public:
    AUnionShortcutRingActor(const FObjectInitializer& ObjectInitializer);

};

