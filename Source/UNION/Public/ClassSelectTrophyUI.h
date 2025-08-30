#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGrandPrixId.h"
#include "EGrandPrixProgressId.h"
#include "ClassSelectTrophyUI.generated.h"

class UGrandPrixTrophyUI;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UClassSelectTrophyUI : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrandPrixId GrandPrixId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrandPrixTrophyUI* GrandPrixTrophy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* TrophyVisibleSwitcher;
    
    UClassSelectTrophyUI();

    UFUNCTION(BlueprintCallable)
    bool SetProgress(EGrandPrixProgressId InProgress);
    
};

