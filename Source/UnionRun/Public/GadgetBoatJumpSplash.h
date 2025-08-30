#pragma once
#include "CoreMinimal.h"
#include "GadgetBase.h"
#include "GadgetBoatJumpSplash.generated.h"

class AGadgetBoatJumpSplashPeformance;

UCLASS(Blueprintable)
class UNIONRUN_API UGadgetBoatJumpSplash : public UGadgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGadgetBoatJumpSplashPeformance* m_performanceObject;
    
public:
    UGadgetBoatJumpSplash();

};

