#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LocalizeRuntimeImageArray.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLocalizeRuntimeImageArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> TextureArray;
    
    FLocalizeRuntimeImageArray();
};

