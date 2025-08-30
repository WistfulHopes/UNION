#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeviceChangeInterface.h"
#include "EAppControllerInputType.h"
#include "GadgetDetailWindowData.h"
#include "GadgetDetailWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetDetailWindow : public UUserWidget, public IDeviceChangeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDetailWindowData CurrentWindowData;
    
    UGadgetDetailWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FGadgetDetailWindowData& InWindowData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRaceButtonText(int32 InPlayerIndex, uint8 InputType, const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void ChangeInputTypeIF_Implementation(EAppControllerInputType InNewControllerInputType);
    

    // Fix for true pure virtual functions not being implemented
};

