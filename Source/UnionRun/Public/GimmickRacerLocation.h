#pragma once
#include "CoreMinimal.h"
#include "CollisionMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickRacerLocation.generated.h"

class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UStaticBodyComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickRacerLocation : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MPCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPC;
    
    AGimmickRacerLocation(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

