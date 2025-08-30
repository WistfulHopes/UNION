#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubLap.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubLap : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LapRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LapCountTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LapCountMaterialInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrentLapMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaxLapMID;
    
public:
    URaceUISubLap();

    UFUNCTION(BlueprintCallable)
    void UpdateLapCount(float InDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLapMID(UMaterialInstanceDynamic* Mid);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLap(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLapMID(UMaterialInstanceDynamic* Mid);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLap(int32 Lap);
    
    UFUNCTION(BlueprintCallable)
    void InitializeLapCount(UTextureRenderTarget2D* InRenderTarget);
    
};

