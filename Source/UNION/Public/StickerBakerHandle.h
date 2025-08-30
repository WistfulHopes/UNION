#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StickerBakerHandle.generated.h"

class AUnionStickerBaker;
class UTexture;

UCLASS(Blueprintable)
class UNION_API UStickerBakerHandle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRear;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionStickerBaker* Baker;
    
public:
    UStickerBakerHandle();

    UFUNCTION(BlueprintCallable)
    void ResetHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandleDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBakingComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetBakeResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUnionStickerBaker* GetBaker() const;
    
};

