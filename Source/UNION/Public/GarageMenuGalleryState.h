#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GarageMenuGalleryState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGarageMenuGalleryState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGarageMenuGalleryState(const FObjectInitializer& ObjectInitializer);

};

