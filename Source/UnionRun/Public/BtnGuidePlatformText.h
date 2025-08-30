#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BtnGuidePlatformText.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FBtnGuidePlatformText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextR1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextL1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextStickL;
    
    FBtnGuidePlatformText();
};

