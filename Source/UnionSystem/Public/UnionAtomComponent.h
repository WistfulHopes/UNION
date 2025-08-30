#pragma once
#include "CoreMinimal.h"
#include "AtomComponent.h"
#include "EAtomComponentStatus.h"
#include "Engine/EngineTypes.h"
#include "ESoundPan.h"
#include "UnionAtomComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionAtomComponent : public UAtomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoManageAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AutoAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AutoAttachScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceDisableLoopSoundDistanceCulling: 1;
    
    UUnionAtomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAndResetDistanceCulling();
    
    UFUNCTION(BlueprintCallable)
    bool SetPanSplit(ESoundPan Pan);
    
    UFUNCTION(BlueprintCallable)
    void PlayWithAutoAttach(float InStartTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatusChangedFunc(EAtomComponentStatus Status, UAtomComponent* AtomComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioFinishedFunc();
    
};

