#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateRivalTeamResult.generated.h"

class ASceneInputKeyHandler;
class UMenuInputRecieveObject;
class UObject;
class UPartyRaceRivalResultWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateRivalTeamResult : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPartyRaceRivalResultWidget> _RivalResultWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneInputKeyHandler* _InputKeyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* _InputReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceRivalResultWidget* _RivalResultWidget;
    
public:
    URaceResultSequenceStateRivalTeamResult(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWinPlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRewardGetWindowFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressPlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnKeyPressed(FKey PressedKey);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonInput();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptKeyPressed(UObject* Object);
    
};

