#pragma once
#include "CoreMinimal.h"
#include "RaceEndingSequenceStateBase.h"
#include "EndingSequenceStateMain.generated.h"

class ASceneInputKeyHandler;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UEndingSequenceStateMain : public URaceEndingSequenceStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneInputKeyHandler* InputKeyHandler;
    
    UEndingSequenceStateMain(const FObjectInitializer& ObjectInitializer);

};

