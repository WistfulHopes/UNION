#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PrivateMatchClassSelectDelegate.h"
#include "PrivateMatchMenuSelectClassState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPrivateMatchMenuSelectClassState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrivateMatchClassSelect OnSelectedClass;
    
    UPrivateMatchMenuSelectClassState(const FObjectInitializer& ObjectInitializer);

};

