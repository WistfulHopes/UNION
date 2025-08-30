#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProceduralMeshComponentEx.h"
#include "TireMark.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONRUN_API UTireMark : public UProceduralMeshComponentEx {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialInterfaces_;
    
public:
    UTireMark(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTireMarkMaterial(UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetTireMarkMaterial();
    
    UFUNCTION(BlueprintCallable)
    void AddPoint3D(const FVector& Position, const FVector& Normal, const FVector& Side, float Density, const FColor& Color, const FVector2D& OffsetUV);
    
};

