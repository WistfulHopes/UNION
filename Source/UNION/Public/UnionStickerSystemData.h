#pragma once
#include "CoreMinimal.h"
#include "UnionStickerSystemData.generated.h"

class AGarageCamera;
class AMenuRacerBase;
class ATurntable;
class UMenuInputRecieveObject;

USTRUCT(BlueprintType)
struct FUnionStickerSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* InputReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGarageCamera* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATurntable* Turntable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuRacerBase* Racer;
    
    UNION_API FUnionStickerSystemData();
};

