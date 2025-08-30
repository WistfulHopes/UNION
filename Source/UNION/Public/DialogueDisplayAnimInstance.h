#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DialogueDisplayAnimationAssetID.h"
#include "DialogueDisplayAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UNION_API UDialogueDisplayAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimationAssetList;
    
    UDialogueDisplayAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationAssetById(const DialogueDisplayAnimationAssetID AssetId) const;
    
};

