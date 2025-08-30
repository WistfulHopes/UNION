#pragma once
#include "CoreMinimal.h"
#include "HonorTitleTabStruc.generated.h"

class UHonorTitleSettingBtn;

USTRUCT(BlueprintType)
struct FHonorTitleTabStruc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHonorTitleSettingBtn*> Buttons;
    
    UNION_API FHonorTitleTabStruc();
};

