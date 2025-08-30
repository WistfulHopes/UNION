#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetManContainer.generated.h"

class UCanvasPanelSlot;
class UUserWidget;

UCLASS(Blueprintable)
class UNIONUI_API UWidgetManContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> WidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanelSlot*> CanvasPanelSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LogicArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSubWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContainerZOrder;
    
    UWidgetManContainer();

    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void OffsetZOrder(int32 Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsSubWidgetContainer(bool& bSubWidget);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UUserWidget* Widget, const int32 ZOrder, UCanvasPanelSlot* Slot, UObject* LogicObjectRef, bool bSubWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWidgetCount(int32& WidgetCount);
    
    UFUNCTION(BlueprintCallable)
    void GetWidgetAt(int32 Index, bool& IsSucceeded, UUserWidget*& Widget, UObject*& LogicObject);
    
    UFUNCTION(BlueprintCallable)
    void FindWidget(UUserWidget* Widget, bool& IsFound, int32& Index);
    
    UFUNCTION(BlueprintCallable)
    void AddWidget(UUserWidget* Widget, UCanvasPanelSlot* Slot, UObject* LogicObjectRef, bool& bSucceeded);
    
};

