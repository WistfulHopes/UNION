#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelect.generated.h"

class ALobbyCourseSelectSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelect : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyCourseSelectSequence* ChildCourseSelectSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> RefCourseMainId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
public:
    ULobbyCourseSelect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(const FLobbyCourseSelectData& LobbyCourseSelectData, TArray<EStageId>& StageIds);
    
    UFUNCTION(BlueprintCallable)
    void DecideCalllback(EStageId& StageId);
    
};

