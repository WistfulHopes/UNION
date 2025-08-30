#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGrandPrixEventFlag.h"
#include "EMenuSequenceBGM.h"
#include "MenuSequenceSubStateBase.h"
#include "DodonpaEventState.generated.h"

class ACameraActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UDodonpaEventState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* EventCamera;
    
public:
    UDodonpaEventState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnEventCamera(FTransform CameraTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDodonpaEventStatus(FName InCallEventName, EGrandPrixEventFlag InSaveDataFlagId, EMenuSequenceBGM InBGMId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyEventCamera();
    
};

