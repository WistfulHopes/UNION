#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "UnionPlayerInfoBillboardUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionPlayerInfoBillboardUI : public UUserWidget {
    GENERATED_BODY()
public:
    UUnionPlayerInfoBillboardUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeDriverInfo(const EDriverId& DriverId);
    
};

