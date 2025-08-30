#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EChallengeCategory.h"
#include "ChallengeListTabWidget.generated.h"

class UChallengeListTabButtonWidget;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UChallengeListTabWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EChallengeCategory, UChallengeListTabButtonWidget*> _TabButtons;
    
public:
    UChallengeListTabWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnTabButtonDecided(UUnionUIButtonBase* Button);
    
};

