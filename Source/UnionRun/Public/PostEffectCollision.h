#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionGimmickObjectBase.h"
#include "PostEffectCollision.generated.h"

class UGimmickStaticBodyComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API APostEffectCollision : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* StaticBodyComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDirection;
    
public:
    APostEffectCollision(const FObjectInitializer& ObjectInitializer);

};

