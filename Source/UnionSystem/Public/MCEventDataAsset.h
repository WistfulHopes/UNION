#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MCEventData.h"
#include "MCEventDataAsset.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMCEventDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMCEventData> list;
    
    UMCEventDataAsset();

};

