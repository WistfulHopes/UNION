#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MenuMockChoicesFloat.generated.h"

USTRUCT(BlueprintType)
struct FMenuMockChoicesFloat : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UNIONSYSTEM_API FMenuMockChoicesFloat();
};

