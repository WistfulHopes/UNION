#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DialogueAnimationAssetID.h"
#include "DialogueCharacterAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UNION_API UDialogueCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<DialogueAnimationAssetID, UAnimSequence*> AnimationAssets;
    
public:
    UDialogueCharacterAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationAssetById(const DialogueAnimationAssetID AssetId) const;
    
};

