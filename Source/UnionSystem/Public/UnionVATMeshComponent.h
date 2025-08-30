#pragma once
#include "CoreMinimal.h"
#include "VATMeshComponent.h"
#include "EUnionVATPlayMode.h"
#include "EVisibilityBasedVatUpdateOption.h"
#include "UnionVATSequenceInfo.h"
#include "UnionVATMeshComponent.generated.h"

class UUnionVATMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionVATMeshComponent : public UVATMeshComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVATSequenceCallbackDelegate, UUnionVATMeshComponent*, VATMeshComponent, const FUnionVATSequenceInfo&, SequenceInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVATSequenceCallbackDelegate OnVATSequenceCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityBasedVatUpdateOption VisibilityBasedVatUpdateOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionVATPlayMode PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndice0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndice1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndice2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndice3;
    
    UUnionVATMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateFrame();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDeltaTime(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayMode(EUnionVATPlayMode NewPlayMode, bool ResetState);
    
    UFUNCTION(BlueprintCallable)
    void SetFrame(int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlaybackState();
    
    UFUNCTION(BlueprintCallable)
    void Rebuild(bool ResetState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrame() const;
    
};

