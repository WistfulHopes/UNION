#pragma once
#include "CoreMinimal.h"
#include "AppPlayerController.h"
#include "ERaceInputKey.h"
#include "ERacePlayerControllerSubMode.h"
#include "RacePlayerController.generated.h"

class APawn;

UCLASS(Blueprintable)
class UNIONSYSTEM_API ARacePlayerController : public AAppPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* RaceInputReciever;
    
public:
    ARacePlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubMode(ERacePlayerControllerSubMode InSubMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaceInputEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERacePlayerControllerSubMode GetSubMode() const;
    
    UFUNCTION(BlueprintCallable)
    void DoInputRaceReleased(ERaceInputKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void DoInputRacePressed(ERaceInputKey InKey, float Amount);
    
};

