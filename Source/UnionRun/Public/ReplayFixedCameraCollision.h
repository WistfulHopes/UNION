#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionHitInfo.h"
#include "CollisionMessageInterface.h"
#include "Templates/SubclassOf.h"
#include "UnionGimmickObjectBase.h"
#include "ReplayFixedCameraCollision.generated.h"

class AReplayFixedCameraFocus;
class UGimmickStaticBodyComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AReplayFixedCameraCollision : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayFixedCameraFocus> StartCameraClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplayFixedCameraFocus* StartCameraObject;
    
public:
    AReplayFixedCameraCollision(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraData(FVector NewBoxSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionBaseHit(const FCollisionHitInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void CreateCameraObject();
    

    // Fix for true pure virtual functions not being implemented
};

