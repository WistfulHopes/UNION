#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubAirTrickInfo.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubAirTrickInfo : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubAirTrickInfo();

    UFUNCTION(BlueprintCallable)
    void SetAirTrickTextInfo(int32 SuccessCount, UImage* Tex_1000, UImage* Tex_0100, UImage* Tex_0010, UImage* Tex_0001, UImage* Tex_Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAirTrickInfoAndFireAnimation(int32 SuccessCount, int32 SuccessBonusCount, bool IsGhostView);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAirTrickValue(int32 SuccessCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAirTrickBonusValue(int32 SuccessCount) const;
    
};

