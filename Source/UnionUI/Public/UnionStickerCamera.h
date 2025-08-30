#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "UnionStickerCamera.generated.h"

UCLASS(Blueprintable)
class UNIONUI_API AUnionStickerCamera : public ASceneCapture2D {
    GENERATED_BODY()
public:
    AUnionStickerCamera(const FObjectInitializer& ObjectInitializer);

};

