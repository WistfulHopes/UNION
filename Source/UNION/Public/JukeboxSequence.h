#pragma once
#include "CoreMinimal.h"
#include "OnBackEventDelegate.h"
#include "MenuSequenceSubStateBase.h"
#include "JukeboxSequence.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UJukeboxSequence : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
    UJukeboxSequence(const FObjectInitializer& ObjectInitializer);

};

