#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateSetupAssets.generated.h"

class UStickerBakerHandle;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateSetupAssets : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStickerBakerHandle*> FrontStickerHandleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStickerBakerHandle*> RearStickerHandleArray;
    
public:
    URaceSequenceStateSetupAssets(const FObjectInitializer& ObjectInitializer);

};

