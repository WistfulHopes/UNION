#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "EControllerButtonTextureIndex.h"
#include "ControllerButtonData.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UControllerButtonData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, EControllerButtonTextureIndex> KeyConfig;
    
    UControllerButtonData();

};

