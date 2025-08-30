#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtomSoundPlus.generated.h"

class UAtomComponentPlus;

UCLASS(Blueprintable)
class UNION_API AAtomSoundPlus : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponentPlus* AtomComponent;
    
    AAtomSoundPlus(const FObjectInitializer& ObjectInitializer);

};

