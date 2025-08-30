#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "EUnionTextureCompressType.h"
#include "UserStickerData.h"
#include "StickerBakerData.h"
#include "UnionStickerBaker.generated.h"

class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;
class UStaticMeshComponent;
class UStickerTextureAsyncLoader;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNION_API AUnionStickerBaker : public ASceneCapture2D {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStickerDelegate);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStickerDelegate OnFinishBakeSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> TextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> PlaneComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StickerTextureCompress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionTextureCompressType CompressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStickerTextureAsyncLoader* StickerLoader;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* StickerTexture;
    
public:
    AUnionStickerBaker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetupSub(const TArray<FUserStickerData>& StickerArray, const FStickerBakerData& BakeData, const int32 InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetupPooling();
    
    UFUNCTION(BlueprintCallable)
    void Setup(const TArray<FUserStickerData>& StickerArray, const FStickerBakerData& BakeData, const int32 InSize, const bool IsAlphaReverse);
    
    UFUNCTION(BlueprintCallable)
    void ResetBaker();
    
    UFUNCTION(BlueprintCallable)
    void Loop(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCapture() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetStickerTextureCompress();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetStickerTexture();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void FinalizePooling();
    
};

