#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MachinePartsTextBalloonGroup.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachinePartsTextBalloonGroup : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
public:
    UMachinePartsTextBalloonGroup();

};

