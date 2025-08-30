#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ItemMessageInterface.h"
#include "UnionAttackItemInfoInterface.h"
#include "ItemObjectBase.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API AItemObjectBase : public AActor, public IUnionAttackItemInfoInterface, public IItemMessageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VioletVoidAbsorbTargetScale;
    
    AItemObjectBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

