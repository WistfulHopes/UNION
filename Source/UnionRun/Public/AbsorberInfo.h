#pragma once
#include "CoreMinimal.h"
#include "AbsorberInfo.generated.h"

class AActor;
class UCollisionBaseComponent;

USTRUCT(BlueprintType)
struct FAbsorberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsorberRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsorberPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AbsorberObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollisionBaseComponent* HitComponent;
    
    UNIONRUN_API FAbsorberInfo();
};

