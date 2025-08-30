#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserStickerData.h"
#include "BakeRequestData.h"
#include "StickerBakeManagerSubsystem.generated.h"

class AUnionStickerBaker;
class UStickerBakerHandle;
class UTexture;

UCLASS(Blueprintable)
class UNION_API UStickerBakeManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture*> FrontStickerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture*> RearStickerMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUnionStickerBaker*> BakerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBakeRequestData> RequestQueue;
    
public:
    UStickerBakeManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SweepUnusedRenderTargets();
    
    UFUNCTION(BlueprintCallable)
    UStickerBakerHandle* StartBake(const TArray<FUserStickerData>& StickerArray, const int32 InSize, const bool IsAlphaReverse, bool IsRear, bool IsInRace);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void RegisterRearStickerMap(int32 RacerIndex, UTexture* StickerTexture);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFrontStickerMap(int32 RacerIndex, UTexture* StickerTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserStickerDataEmpty(const TArray<FUserStickerData>& StickerArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBakingComplete(const UStickerBakerHandle* Handle) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetRearStickerTextureFromRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetFrontStickerTextureFromRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUnionStickerBaker* GetBaker(const UStickerBakerHandle* Handle) const;
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

