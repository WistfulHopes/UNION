#pragma once
#include "CoreMinimal.h"
#include "ItemObjectBase.h"
#include "ItemPackageRingObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AItemPackageRingObject : public AItemObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundPlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundInterval;
    
    AItemPackageRingObject(const FObjectInitializer& ObjectInitializer);

};

