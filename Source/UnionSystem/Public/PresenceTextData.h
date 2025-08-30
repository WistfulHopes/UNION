#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUnionPresenceType.h"
#include "PresenceTextData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FPresenceTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionPresenceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Body;
    
    FPresenceTextData();
};

