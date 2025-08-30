#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineMoveSettingParam.h"
#include "SplineMoveObject.generated.h"

class USceneComponent;
class UUnionSplineMoveComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ASplineMoveObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMoveSettingParam SettingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionSplineMoveComponent* SplineMoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
public:
    ASplineMoveObject(const FObjectInitializer& ObjectInitializer);

};

