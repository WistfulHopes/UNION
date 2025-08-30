#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELanguage.h"
#include "LanguageTable.generated.h"

USTRUCT(BlueprintType)
struct FLanguageTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguage TextLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguage VoiceLanguage;
    
    UNIONSYSTEM_API FLanguageTable();
};

