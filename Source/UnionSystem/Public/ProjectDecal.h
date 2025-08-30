#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProjectDecal.generated.h"

class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UProjectDecal : public UObject {
    GENERATED_BODY()
public:
    UProjectDecal();

    UFUNCTION(BlueprintCallable)
    UTexture2D* Project(int32 Width, int32 Height, int32 MaterialIndex, const UStaticMeshComponent* Projected, const UStaticMeshComponent* Projector, const UTexture2D* Texture, bool Overwrite);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(int32 Width, int32 Height, int32 MaterialIndex, const UStaticMeshComponent* Projected);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

