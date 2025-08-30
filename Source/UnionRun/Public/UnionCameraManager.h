#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "UnionCameraManager.generated.h"

class UCameraModifier;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionCameraManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier> CameraModiferPostEffectClass;
    
    UUnionCameraManager();

};

