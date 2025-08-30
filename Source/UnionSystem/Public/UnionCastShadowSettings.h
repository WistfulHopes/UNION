#pragma once
#include "CoreMinimal.h"
#include "UnionCastShadowSettings.generated.h"

USTRUCT(BlueprintType)
struct FUnionCastShadowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DashPanel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ring;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ItemBox;
    
    UNIONSYSTEM_API FUnionCastShadowSettings();
};

