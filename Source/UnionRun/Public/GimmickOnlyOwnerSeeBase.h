#pragma once
#include "CoreMinimal.h"
#include "CameraMessageInterface.h"
#include "UnionGimmickObjectBase.h"
#include "GimmickOnlyOwnerSeeBase.generated.h"

class AGimmickOnlyOwnerSeeBase;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AGimmickOnlyOwnerSeeBase : public AUnionGimmickObjectBase, public ICameraMessageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGimmickOnlyOwnerSeeBase*> CloneObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    AGimmickOnlyOwnerSeeBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

