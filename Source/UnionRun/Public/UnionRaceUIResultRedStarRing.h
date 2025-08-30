#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERedStarRingUIType.h"
#include "UnionRaceUIResultRedStarRing.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIResultRedStarRing : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERedStarRingUIType RedStarRingUIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastPlayingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPickUp;
    
    UUnionRaceUIResultRedStarRing();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetRing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PickUpRing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitRing(bool bPickUp);
    
};

