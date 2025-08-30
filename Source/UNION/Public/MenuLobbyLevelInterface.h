#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MenuLobbyLevelInterface.generated.h"

class AActor;
class ACameraActor;
class ASkeletalMeshActor;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class UMenuLobbyLevelInterface : public UInterface {
    GENERATED_BODY()
};

class IMenuLobbyLevelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASkeletalMeshActor* GetOrbotActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetFestaVoltageActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UStaticMeshComponent*> GetFestaGroupPlates();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASkeletalMeshActor* GetDodonpaActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASkeletalMeshActor* GetCubotActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ACameraActor* GetCameraActor();
    
};

