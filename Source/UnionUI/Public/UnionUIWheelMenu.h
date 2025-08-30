#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MenuInputRecieveInterface.h"
#include "EWheelDirection.h"
#include "OnUISceneEventDelegate.h"
#include "UnionUISceneBase.h"
#include "UnionUIWheelMenu.generated.h"

class APlayerController;
class UMenuInputRecieveObject;
class UObject;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIWheelMenu : public UUnionUISceneBase, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUISceneEvent OnUISceneWheelSelectEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWheelDirection, UUnionUIButtonBase*> SelectDirectStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
public:
    UUnionUIWheelMenu();

    UFUNCTION(BlueprintCallable)
    void WheelMenuSelectInput_Impl(UObject* Object, FVector2D InStickVector);
    
    UFUNCTION(BlueprintCallable)
    void WheelMenuSelect_Impl(FVector InStickVector);
    
    UFUNCTION(BlueprintCallable)
    void UISceneWheelMenuKeyUnBind(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void UISceneWheelMenuKeyBind(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetUpWheelParam(bool bInIsLeftTurn, float InLStickIgone, bool bInIsTopHalf, float InBitweenDeathZone);
    
    UFUNCTION(BlueprintCallable)
    void OnUISceneWheelSelectEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex);
    

    // Fix for true pure virtual functions not being implemented
};

