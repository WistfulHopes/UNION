#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "HonorTitleSequence.generated.h"

class UHonorTitleSettingWindow;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UHonorTitleSequence : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHonorTitleDelegateEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorTitleDelegateEvent OnReturnToOptionTopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHonorTitleDelegateEvent OnChangeChallengeSequenceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHonorTitleSettingWindow> HonorTitleSettingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHonorTitleSettingWindow* HonorTitleSettingWidget;
    
    UHonorTitleSequence(const FObjectInitializer& ObjectInitializer);

};

