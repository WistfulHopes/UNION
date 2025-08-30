#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplinePointParam.h"
#include "UnionFlightCourseDebugDisp.generated.h"

class UMaterial;
class UProceduralMeshComponent;

UCLASS(Blueprintable)
class UNIONRUN_API AUnionFlightCourseDebugDisp : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* DispMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplinePointParam> PointParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CylinderSplitNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAssistLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssistLength;
    
public:
    AUnionFlightCourseDebugDisp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDispMesh();
    
    UFUNCTION(BlueprintCallable)
    void SetUseAssistLength(bool flag);
    
};

