#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BakeDebugActor.generated.h"

class UBakeWaitingWidget;

UCLASS(Blueprintable)
class UNION_API ABakeDebugActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBakeWaitingWidget* m_WaitingWidget;
    
public:
    ABakeDebugActor(const FObjectInitializer& ObjectInitializer);

};

