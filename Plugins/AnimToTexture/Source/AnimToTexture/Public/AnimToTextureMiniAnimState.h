#pragma once
#include "CoreMinimal.h"
#include "AnimToTextureMiniAnimState.generated.h"

USTRUCT(BlueprintType)
struct FAnimToTextureMiniAnimState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bLooping;
    
    ANIMTOTEXTURE_API FAnimToTextureMiniAnimState();
};

