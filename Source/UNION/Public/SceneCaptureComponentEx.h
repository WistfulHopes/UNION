#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneCaptureComponentEx.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USceneCaptureComponentEx : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* OwnerMeshComponent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance_;
    
public:
    USceneCaptureComponentEx(const FObjectInitializer& ObjectInitializer);

};

