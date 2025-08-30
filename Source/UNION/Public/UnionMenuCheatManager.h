#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "UnionMenuCheatManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUnionMenuCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CheatObjects;
    
public:
    UUnionMenuCheatManager();

};

