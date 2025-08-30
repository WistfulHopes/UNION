#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "GimmickOnlyOwnerSeeBase.h"
#include "RedStarRingObject.generated.h"

class UMaterialInstance;
class UStaticBodyComponent;
class USuckedMovement;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ARedStarRingObject : public AGimmickOnlyOwnerSeeBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuckedMovement* SuckedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedStarRingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* NormalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* PickUpMaterial;
    
public:
    ARedStarRingObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

