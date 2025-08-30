#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DialogueEventManagerBase.generated.h"

class ADodonpaBase;

UCLASS(Blueprintable)
class UNION_API ADialogueEventManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CubotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OrbotActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADodonpaBase* DodonpaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DisplayActor;
    
    ADialogueEventManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DestroyActorObject();
    
    UFUNCTION(BlueprintCallable)
    void CreateActorObject();
    
};

