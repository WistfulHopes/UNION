#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TremorParameter.h"
#include "CameraExtensionParameterObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ACameraExtensionParameterObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTremorParameter TremorParameter_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTremorParameter TremorParameter_Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTremorParameter TremorParameter_High;
    
    ACameraExtensionParameterObject(const FObjectInitializer& ObjectInitializer);

};

