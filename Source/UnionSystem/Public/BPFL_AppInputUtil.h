#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAppInputValid.h"
#include "BPFL_AppInputUtil.generated.h"

class AAppPlayerController;
class UObject;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UBPFL_AppInputUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_AppInputUtil();

    UFUNCTION(BlueprintCallable)
    static void UnRegisterMenuObject(int32 InPlayerIndex, UObject* MenuObject, EAppInputValid& OutputPin);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRegisteredMenuObject(int32 InPlayerIndex, UObject* MenuObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAppPlayerController* GetAppPlayerController(int32 ControllerId);
    
};

