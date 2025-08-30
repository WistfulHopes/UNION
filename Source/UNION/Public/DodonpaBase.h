#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogueDodonpaAnimationStateID.h"
#include "DodonpaBase.generated.h"

UCLASS(Blueprintable)
class UNION_API ADodonpaBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCommandWaitEndEvent;
    
    ADodonpaBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDodonpaMotionIF(const FName& AnimStateName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cast2Enum(FName AnimStateName, bool& IsValid, DialogueDodonpaAnimationStateID& State);
    
};

