#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EChallengeCategory.h"
#include "ChallengeWidgetDataAsset.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class UNION_API UChallengeWidgetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChallengeCategory, FText> _TabCategoryNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ChaoMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _SpecialUnlockPopupTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _SpecialUnlockPopupMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> _SECueCategoryChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> _SECueChallengeChange;
    
    UChallengeWidgetDataAsset();

};

