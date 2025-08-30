#pragma once
#include "CoreMinimal.h"
#include "OptionInternationalization.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FOptionInternationalization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextLang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VoiceLang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CaptionLang;
    
    FOptionInternationalization();
};

