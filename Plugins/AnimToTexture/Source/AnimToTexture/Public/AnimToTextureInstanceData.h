#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshInstanceData -FallbackName=InstancedStaticMeshInstanceData
#include "AnimToTextureInstancePlaybackData.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "AnimToTextureInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FAnimToTextureInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimToTextureInstancePlaybackData> PlaybackData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> StaticMeshInstanceData;
    
    ANIMTOTEXTURE_API FAnimToTextureInstanceData();
};

