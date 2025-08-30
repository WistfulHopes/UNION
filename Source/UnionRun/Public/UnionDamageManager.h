#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UnionDamageManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionDamageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageReactionDataTable;
    
public:
    UUnionDamageManager();

};

