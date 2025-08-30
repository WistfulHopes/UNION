#pragma once
#include "CoreMinimal.h"
#include "LobbyCourseSelectData.h"
#include "MenuSequenceSubStateBase.h"
#include "LobbyCourseSelectGuestComponent.generated.h"

class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyCourseSelectGuestComponent : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyCourseSelectData RefLobbyCourseSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstUpdate;
    
public:
    ULobbyCourseSelectGuestComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCancelSelectCourse(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
};

