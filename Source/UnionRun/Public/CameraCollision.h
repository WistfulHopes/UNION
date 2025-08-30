#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EResultCameraProductionType.h"
#include "UnionGimmickObjectBase.h"
#include "CameraCollision.generated.h"

class UGimmickStaticBodyComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ACameraCollision : public AUnionGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CameraId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResultCameraProductionType ResultCameraType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGimmickStaticBodyComponent* StaticBodyComponent;
    
public:
    ACameraCollision(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraData(int32 NewCameraId, FVector NewBoxSize, EResultCameraProductionType NewResultCameraType);
    
};

