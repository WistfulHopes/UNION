#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EResponseCodeAbstract.h"
#include "ServerErrorTextData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FServerErrorTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResponseCodeAbstract ResponseCodeAbstract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReturnTopMenu;
    
    FServerErrorTextData();
};

