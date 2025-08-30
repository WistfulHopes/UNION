#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BtDebugDispActor.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ABtDebugDispActor : public AActor {
    GENERATED_BODY()
public:
    ABtDebugDispActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Execute_RayCast(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DrawSphere(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_DispStageAABB(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_CollisionText(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_CollisionDisp(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_CalcStageAABB(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_AreaDataCourseCollisionText(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_AreaDataCourseCollisionDisp(const TArray<FString>& args);
    
    UFUNCTION(BlueprintCallable)
    void Execute_AreaDataBlockDisp(const TArray<FString>& args);
    
};

