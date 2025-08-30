#pragma once
#include "CoreMinimal.h"
#include "PlayLogSaveGameGadget.generated.h"

USTRUCT(BlueprintType)
struct FPlayLogSaveGameGadget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Prossession[250];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Usage[250];
    
public:
    UNIONSYSTEM_API FPlayLogSaveGameGadget();
};

