#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputCoreTypes.h"
#include "InputKeyDelegateDelegate.h"
#include "InputMouseClickDelegateDelegate.h"
#include "SceneInputKeyHandler.generated.h"

UCLASS(Blueprintable)
class UNION_API ASceneInputKeyHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputKeyDelegate OnKeyPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMouseClickDelegate OnMouseClicked;
    
    ASceneInputKeyHandler(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleMouseClick();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputKey(FKey Key);
    
};

