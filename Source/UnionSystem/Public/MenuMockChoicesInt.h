#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MenuMockChoicesInt.generated.h"

USTRUCT(BlueprintType)
struct FMenuMockChoicesInt : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UNIONSYSTEM_API FMenuMockChoicesInt();
};

