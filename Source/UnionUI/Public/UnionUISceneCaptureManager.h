#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UnionUISceneCaptureManager.generated.h"

class AActor;
class AUnionUICapture2DActor;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUISceneCaptureManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CaptureTargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUnionUICapture2DActor*> UICapture2DActors;
    
    UUnionUISceneCaptureManager();

    UFUNCTION(BlueprintCallable)
    void UnRegisterCaptureCameraActor(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCaptureTargetActor(const int32& PlayerControllerIndex, AActor* CaptureActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCaptureCameraActor(const int32& PlayerControllerIndex, AUnionUICapture2DActor* CaptureActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCaptureTargetActor();
    
    UFUNCTION(BlueprintCallable)
    AUnionUICapture2DActor* GetCaptureCameraActorByPlayerControllerIndex(const int32& PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<AUnionUICapture2DActor*> GetCaptureCameraActor();
    
};

