#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UnionMachineBakeMaterialSubsystem.generated.h"

class ABakeDebugActor;

UCLASS(Blueprintable)
class UNION_API UUnionMachineBakeMaterialSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABakeDebugActor* BakeDebugActor;
    
public:
    UUnionMachineBakeMaterialSubsystem();

};

