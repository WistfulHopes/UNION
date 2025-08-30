#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnBC7EncoderCompletedDelegate.h"
#include "BC7EncoderAsyncExecution.generated.h"

class UBC7EncoderAsyncExecution;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class BC7CODEC_API UBC7EncoderAsyncExecution : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBC7EncoderCompleted OnCompleted_;
    
    UBC7EncoderAsyncExecution();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UBC7EncoderAsyncExecution* EncodeBC7(UObject* WorldContextObject, UTexture2D* Texture2D, bool GenMips, bool SRGB, float AlphaWeight);
    
};

