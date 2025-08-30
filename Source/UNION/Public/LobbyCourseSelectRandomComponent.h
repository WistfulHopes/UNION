#pragma once
#include "CoreMinimal.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelectRandomComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelectRandomComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstUpdate;
    
public:
    ULobbyCourseSelectRandomComponent(const FObjectInitializer& ObjectInitializer);

};

