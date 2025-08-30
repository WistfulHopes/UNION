#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EMachineId.h"
#include "MachineIconCaptureLevelScriptActor.generated.h"

class UDataTable;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNION_API AMachineIconCaptureLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegate, UTextureRenderTarget2D*, RenderTextureColor, UTextureRenderTarget2D*, RenderTextureAlpha);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCaptureCompleted;
    
    AMachineIconCaptureLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Capture(EMachineId InMachineID, int32 InSizeX, int32 InSizeY, const UDataTable* InCaptureDataTable);
    
};

