#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnBackEventDelegate.h"
#include "EMatchingLobbyType.h"
#include "LobbyFinishDirectingManager.generated.h"

UCLASS(Blueprintable)
class UNION_API ALobbyFinishDirectingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent LobbyEndDirectingFinished;
    
    ALobbyFinishDirectingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequenceEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetup(EMatchingLobbyType InGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
};

