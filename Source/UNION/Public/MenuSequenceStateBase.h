#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EMenuSequenceMainState.h"
#include "MenuSequenceStateBase.generated.h"

class AMenuSequence;
class UUnionUISceneBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMenuSequenceStateBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceMainState DefaultMenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUnionUISceneBase> UISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* UIScene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuSequence* OwnerMenuSequence;
    
public:
    UMenuSequenceStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextMenuSequenceState(EMenuSequenceMainState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMenuSequence* GetOwnerMenuSequence() const;
    
};

