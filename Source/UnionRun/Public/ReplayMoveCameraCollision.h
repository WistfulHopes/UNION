#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionHitInfo.h"
#include "CollisionMessageInterface.h"
#include "Templates/SubclassOf.h"
#include "UnionGimmickObjectBase.h"
#include "ReplayMoveCameraCollision.generated.h"

class AReplayMoveCameraFocus;
class UGimmickStaticBodyComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AReplayMoveCameraCollision : public AUnionGimmickObjectBase, public ICollisionMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AReplayMoveCameraFocus> StartCameraClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* StaticBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplayMoveCameraFocus* StartCameraObject;
    
public:
    AReplayMoveCameraCollision(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraData(FVector NewBoxSize);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCollisionBaseHit(const FCollisionHitInfo& Info);
    

    // Fix for true pure virtual functions not being implemented
};

