#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformPrivilegeObject.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API APlatformPrivilegeObject : public AActor {
    GENERATED_BODY()
public:
    APlatformPrivilegeObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnd() const;
    
};

