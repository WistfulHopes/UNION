#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGameModeId.h"
#include "ECharaSelectControlState.h"
#include "EMachineSelectControlState.h"
#include "CharaSelectUtilityLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UNION_API UCharaSelectUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharaSelectUtilityLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCharaModel(UObject* WorldContextObject, int32 InPlayerIndex, int32 InCharaSelectIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVisibleCaptureMachine(UObject* WorldContextObject, int32 InPlayerIndex, bool IsHidden);
    
    UFUNCTION(BlueprintCallable)
    static void SetArrayFlag(int32 InPlayerIndex, bool InFlag, UPARAM(Ref) TArray<bool>& InFlagArray);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDriverSuper(EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDriverSelectable(UObject* WorldContextObject, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGameModeId GetLobbySelectedGameModeId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetCaptureMachine(UObject* WorldContextObject, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetArrayFlag(int32 InPlayerIndex, const TArray<bool>& InFlagArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableMenuInputDirection(UObject* WorldContextObject, const ECharaSelectControlState CharaState, const EMachineSelectControlState MachineState, int32 InPlayerIndex);
    
};

