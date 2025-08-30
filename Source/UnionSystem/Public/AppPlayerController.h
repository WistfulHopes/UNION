#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "EAppControllerInputType.h"
#include "EMainMenuRegistPriority.h"
#include "EMenuInputKey.h"
#include "AppPlayerController.generated.h"

class UInputDataAsset;
class UObject;

UCLASS(Blueprintable)
class UNIONSYSTEM_API AAppPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMousePointerEvent, FPointerEvent, InPointerEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeControllerInputType, EAppControllerInputType, BeforeType, EAppControllerInputType, AfterType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDataAsset* InputDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultInputConfigName;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeControllerInputType OnChangeControllerInputTypeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMousePointerEvent OnMousePointerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMousePointerEvent OnMousePointerUpEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LastHoveredObject;
    
public:
    AAppPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSubMenu();
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterSingleSubMenu(const UObject* InMenuObject);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterSingleMenu(const UObject* InMenuObject);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterMenu();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterMainMenuAll();
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterMainMenu(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void SetLastHoveredObject(UObject* HoveredObject);
    
    UFUNCTION(BlueprintCallable)
    void SetInputBlocked(bool InBlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetForceNonConsumeMouseEvent(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubMenuUpperPriority(bool IsEnable, int32 InPrioirty);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubMenuLowerPriority(bool IsEnable, int32 InPrioirty);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubMenuAll(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSubMenu(const UObject* InObject, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMainMenuUpperPriority(bool IsEnable, int32 InPrioirty);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMainMenuLowerPriority(bool IsEnable, int32 InPrioirty);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMainMenuAll(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMainMenu(const UObject* InObject, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputConfig(const FName InputConfigName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMenu(UObject* InMenuObject, int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMainMenu(UObject* InObject, EMainMenuRegistPriority InPriority);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMousePointerUp(FPointerEvent InPointerEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMousePointerEventBP(FPointerEvent InPointerEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMousePointer(FPointerEvent InPointerEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftStickVectorAxisEvent(FVector InStickVector);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsSubMenuInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsMenuInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSystemFocusedWidgetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetRegisteredSubMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetRegisteredMenu() const;
    
    UFUNCTION(BlueprintCallable)
    FKey GetRaceConfigKey(const FName& InActionName, bool IsPrimary, bool IsGamepad);
    
    UFUNCTION(BlueprintCallable)
    FKey GetMenuConfigKey(const FName& InActionName, bool IsGamepad, bool IsAnalog);
    
    UFUNCTION(BlueprintCallable)
    FKey GetMappableKeyByMappingName(const FName& MappingName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLeftStickAxisValue() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* GetLastHoveredObject();
    
    UFUNCTION(BlueprintCallable)
    EAppControllerInputType GetCurrentInputType();
    
    UFUNCTION(BlueprintCallable)
    void DoInputMenu(EMenuInputKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void ClearUserFocus();
    
private:
    UFUNCTION(BlueprintCallable)
    void CalcTutorialControllerType(uint8& Type, uint8& Platform);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CalcIsMousePositionInViewport();
    
    UFUNCTION(BlueprintCallable)
    void ApplyOptionControllerSettings();
    
    UFUNCTION(BlueprintCallable)
    void AddRegisterSubMenu(UObject* InMenuObject, int32 InPriority);
    
};

