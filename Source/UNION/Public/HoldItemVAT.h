#pragma once
#include "CoreMinimal.h"
#include "HoldItem.h"
#include "HoldItemVAT.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UUnionVATMeshComponent;

UCLASS(Blueprintable)
class UNION_API AHoldItemVAT : public AHoldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionVATMeshComponent* UnionVATMeshComponent;
    
    AHoldItemVAT(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupComponent(UStaticMesh* StaticMesh, TArray<UMaterialInterface*> Materials, int32 StartIndex);
    
};

