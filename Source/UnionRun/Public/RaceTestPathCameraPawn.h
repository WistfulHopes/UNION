#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UnionRaceInfoInterface.h"
#include "UnionVehicleRaceObjectInterface.h"
#include "RaceTestPathCameraPawn.generated.h"

class UCameraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIONRUN_API ARaceTestPathCameraPawn : public APawn, public IUnionVehicleRaceObjectInterface, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotateYawRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotatePitchRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* TPCameraComponent;
    
    ARaceTestPathCameraPawn(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

