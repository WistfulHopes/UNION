#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "UnionDebugDrawLineSubsystem.generated.h"

class APlayerController;
class UCanvas;

UCLASS(Blueprintable)
class UNIONLIB_API UUnionDebugDrawLineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisibleFlag;
    
    UUnionDebugDrawLineSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetDebugVisibleFlag(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void Draw(UCanvas* InCanvas, APlayerController* InPC);
    
};

