#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UnionScreenCaptureActor.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UNIONUI_API AUnionScreenCaptureActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FileNameBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    AUnionScreenCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SaveTextureToFile(UTextureRenderTarget2D* InRenderTarget, const TArray<FColor>& Bitmap, const FString& InFilePath);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetTextureRenderTarget2D();
    
    UFUNCTION(BlueprintCallable)
    void CaptureScreen();
    
};

