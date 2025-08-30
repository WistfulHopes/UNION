#pragma once
#include "CoreMinimal.h"
#include "MenuSettings.generated.h"

USTRUCT(BlueprintType)
struct FMenuSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshMinLOD;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LobbyMeshLOD;
    
    UNIONSYSTEM_API FMenuSettings();
};

