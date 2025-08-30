#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomListenerFocusPointForCamera.generated.h"

class UCameraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UAtomListenerFocusPointForCamera : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFocusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionFocusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UAtomListenerFocusPointForCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCamera(UCameraComponent* NewCamera);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCameraActivated();
    
};

