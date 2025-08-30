#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionStickerUtil.generated.h"

class AStaticMeshActor;
class AUnionStickerCamera;

UCLASS(Blueprintable)
class UNION_API UUnionStickerUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionStickerUtil();

    UFUNCTION(BlueprintCallable)
    static void SetStickerBox(const FBox2D& Box, const FVector& Center, float Scale, AStaticMeshActor* RenderTargetPlane);
    
    UFUNCTION(BlueprintCallable)
    static void RegistStickerActor(AUnionStickerCamera* Camera);
    
    UFUNCTION(BlueprintCallable)
    static FBox2D GetStickerBox();
    
};

