#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReplayGhostActor.generated.h"

class UDataTable;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;
class UUnionAOStaticMeshComponent;
class UUnionSkeletalMeshComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AReplayGhostActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DebguMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSkeletalMeshComponent* CockpitMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAOStaticMeshComponent* FrontMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionAOStaticMeshComponent* RearMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* SideMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionStaticMeshComponent*> TireMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TireDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CarShadowDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DummyMaterialInterface;
    
    AReplayGhostActor(const FObjectInitializer& ObjectInitializer);

};

