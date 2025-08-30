#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSingletonManageSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONLIB_API UGameSingletonManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjectSingletonList;
    
public:
    UGameSingletonManageSubsystem();

};

