#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EWidgetManZLayer.h"
#include "OnLostPriorityDelegateDelegate.h"
#include "OnPopedDelegateDelegate.h"
#include "OnPushedDelegateDelegate.h"
#include "OnRegainPriorityDelegateDelegate.h"
#include "WidgetManComponent.generated.h"

class UObject;
class UUserWidget;
class UWidgetManBaseWidget;
class UWidgetManContainer;
class UWidgetManDebugString;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONUI_API UWidgetManComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLostPriorityDelegate OnLostPriority;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegainPriorityDelegate OnRegainPriority;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushedDelegate OnPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopedDelegate OnPoped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWidgetManZLayer, int32> ZLayerToZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DebugInfoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseWidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetManDebugString* DebugStringObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetManContainer*> WidgetStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetManBaseWidget* BaseWidget;
    
public:
    UWidgetManComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwapTopWidgetByIndex(int32 IndexFromTop, bool& IsSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void SwapTopWidget(UUserWidget* Widget, bool& IsSucceeded);
    
    UFUNCTION(BlueprintCallable)
    int32 PushWidget(UUserWidget* Widget, UObject* Logic, EWidgetManZLayer ZLayer);
    
    UFUNCTION(BlueprintCallable)
    void PushSubWidget(UUserWidget* SubWidget, UObject* Logic);
    
    UFUNCTION(BlueprintCallable)
    void PopWidget(bool& IsSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void PopAllWidgets();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRegainPriority();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPushed(UUserWidget* Widget, UObject* Logic);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPoped(UUserWidget* Widget, UObject* Logic);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLostPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTopWidgetCount(int32& WidgetCount);
    
    UFUNCTION(BlueprintCallable)
    void GetTopWidget(int32 Index, bool& IsSucceeded, UUserWidget*& Widget, bool& IsSubWidget, UObject*& Logic);
    
    UFUNCTION(BlueprintCallable)
    void FindWidget(UUserWidget* Widget, bool& IsFound, int32& IndexFromTop, int32& IndexInGroup);
    
    UFUNCTION(BlueprintCallable)
    void EventEndStack();
    
    UFUNCTION(BlueprintCallable)
    void EventEndDebug();
    
    UFUNCTION(BlueprintCallable)
    void EventEndBaseWidget();
    
    UFUNCTION(BlueprintCallable)
    void EventDrawDebug();
    
    UFUNCTION(BlueprintCallable)
    void EventBeginStack();
    
    UFUNCTION(BlueprintCallable)
    void EventBeginDebug();
    
    UFUNCTION(BlueprintCallable)
    void EventBeginBaseWidget();
    
    UFUNCTION(BlueprintCallable)
    void DetachDebugStringObject(UWidgetManDebugString* DebugStringObjectRef);
    
    UFUNCTION(BlueprintCallable)
    void AttachDebugStringObject(UWidgetManDebugString* DebugStringObjectRef);
    
    UFUNCTION(BlueprintCallable)
    void AddWidgetToTopAsGroup(UUserWidget* Widget, UObject* Logic, bool& IsSucceeded);
    
};

