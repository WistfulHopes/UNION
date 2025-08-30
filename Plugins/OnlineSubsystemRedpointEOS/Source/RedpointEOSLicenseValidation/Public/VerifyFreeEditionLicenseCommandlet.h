#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "VerifyFreeEditionLicenseCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UVerifyFreeEditionLicenseCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UVerifyFreeEditionLicenseCommandlet();

};

