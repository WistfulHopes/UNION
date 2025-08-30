#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnionUICapture2DActor.generated.h"

class USceneCaptureComponent2D;
class USceneComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNIONUI_API AUnionUICapture2DActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget2D;
    
    AUnionUICapture2DActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShowOnlyActors(TArray<AActor*> ShowOnlyActors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyActors_Multi(TArray<AActor*> InShowOnlyActors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShowOnlyActors(AActor* InShowOnlyActor);
    
    UFUNCTION(BlueprintCallable)
    void InitTexture(const int32& Width, const int32& Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget2D() const;
    
    UFUNCTION(BlueprintCallable)
    void DoCapture();
    
    UFUNCTION(BlueprintCallable)
    void ClearShowOnlyActors();
    
    UFUNCTION(BlueprintCallable)
    void AddShowOnlyActors(TArray<AActor*> InShowOnlyActors);
    
};

