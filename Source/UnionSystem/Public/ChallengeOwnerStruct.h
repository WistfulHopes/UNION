#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EChallengeCategory.h"
#include "ChallengeOwnerStruct.generated.h"

USTRUCT(BlueprintType)
struct FChallengeOwnerStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OwnerName;
    
    UNIONSYSTEM_API FChallengeOwnerStruct();
};

