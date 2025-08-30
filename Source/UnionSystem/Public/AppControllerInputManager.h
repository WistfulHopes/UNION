#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AppControllerInputManager.generated.h"

class AAppPlayerController;
class AMenuPlayerController;
class APlayerController;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppControllerInputManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAppPlayerController*> Controllers;
    
public:
    UAppControllerInputManager();

    UFUNCTION(BlueprintCallable)
    void SetTickable(bool bTickable);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(APlayerController* PlayerController, bool bDestroyPawn);
    
    UFUNCTION(BlueprintCallable)
    bool IsMenuMouseInputMode(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    AAppPlayerController* GetPlayerController(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    AMenuPlayerController* GetMenuPlayerController(int32 PlayerControllerIndex);
    
};

