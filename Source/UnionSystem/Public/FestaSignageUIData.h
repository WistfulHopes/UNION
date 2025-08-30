#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FestaSignageUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFestaSignageUIData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> FestaSignage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseLobbySignage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> FestaLobbySignage;
    
    UNIONSYSTEM_API FFestaSignageUIData();
};

