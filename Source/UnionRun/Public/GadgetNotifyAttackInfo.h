#pragma once
#include "CoreMinimal.h"
#include "AttackedInfo.h"
#include "GadgetNotifyAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FGadgetNotifyAttackInfo : public FAttackedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeDamagePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiHit;
    
    FGadgetNotifyAttackInfo();
};

