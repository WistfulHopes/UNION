#pragma once
#include "CoreMinimal.h"
#include "AppPlayerController.h"
#include "MenuPlayerController.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API AMenuPlayerController : public AAppPlayerController {
    GENERATED_BODY()
public:
    AMenuPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMenuDirectionKeyEnable(bool bEnableDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMenuDirectionKeyEnable() const;
    
};

