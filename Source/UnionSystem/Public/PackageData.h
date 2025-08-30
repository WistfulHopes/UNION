#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentId.h"
#include "PackageData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FPackageData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContentId contentId;
    
    FPackageData();
};

