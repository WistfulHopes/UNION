#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUIButtonIconType.h"
#include "CommonMenuFooterTextData.generated.h"

USTRUCT(BlueprintType)
struct FCommonMenuFooterTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FooterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIButtonIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UNION_API FCommonMenuFooterTextData();
};

