#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EStageId.h"
#include "ELobbyCourseSelectState.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceUIInterface.h"
#include "Templates/SubclassOf.h"
#include "LobbyCourseSelectSequence.generated.h"

class ULobbyCourseSelectGuestComponent;
class ULobbyCourseSelectHostComponent;
class ULobbyCourseSelectRandomComponent;
class ULobbyCourseSelectVoteComponent;
class ULobbyCourseSelectWaitComponent;

UCLASS(Blueprintable)
class UNION_API ALobbyCourseSelectSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStageDecided, EStageId&, StageId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> RefCourseMainId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyCourseSelectState PrevSquenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyCourseSelectState SelectedMainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelectHostComponent> LobbyCourseSelectHostComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectHostComponent* LobbyCourseSelectHostComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelectGuestComponent> LobbyCourseSelectGuestComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectGuestComponent* LobbyCourseSelectGuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelectVoteComponent> LobbyCourseSelectVoteComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectVoteComponent* LobbyCourseSelectVoteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelectWaitComponent> LobbyCourseSelectWaitComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectWaitComponent* LobbyCourseSelectWaitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyCourseSelectRandomComponent> LobbyCourseSelectRandomComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyCourseSelectRandomComponent* LobbyCourseSelectRandomComponent;
    
public:
    ALobbyCourseSelectSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(const FLobbyCourseSelectData& LobbyCourseSelectData, TArray<EStageId>& StageIds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextCourseSelectSequenceState(ELobbyCourseSelectState InState, ELobbyCourseSelectState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitIdleState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitExitState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyCourseSelectData GetLobbyCourseSelectData() const;
    
    UFUNCTION(BlueprintCallable)
    void DecideCalllback(EStageId& StageId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CourseDecideCallback();
    

    // Fix for true pure virtual functions not being implemented
};

