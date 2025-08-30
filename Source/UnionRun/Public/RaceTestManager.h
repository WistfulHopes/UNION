#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RaceTestManager.generated.h"

class UDataTable;
class URaceTestConfig;

UCLASS(Blueprintable)
class UNIONRUN_API URaceTestManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URaceTestConfig* m_config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_itemTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_StageOpenedInfo;
    
public:
    URaceTestManager();

};

