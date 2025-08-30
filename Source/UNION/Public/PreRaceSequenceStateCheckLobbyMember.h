#pragma once
#include "CoreMinimal.h"
#include "PreRaceSeqCheckLobbyMemberExitDelegateDelegate.h"
#include "PreRaceSequenceStateBase.h"
#include "PreRaceSequenceStateCheckLobbyMember.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateCheckLobbyMember : public UPreRaceSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreRaceSeqCheckLobbyMemberExitDelegate OnExitDelegate;
    
public:
    UPreRaceSequenceStateCheckLobbyMember(const FObjectInitializer& ObjectInitializer);

};

