#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "AdvertiseWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UAdvertiseWidget : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Controller_Info;
    
    UAdvertiseWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkipAdvertiseLogo();
    
    UFUNCTION(BlueprintCallable)
    void SetStrapTexture(UTexture2D* InStrapTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseAllAdvAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOfficialVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialiseMovie(const int32 MovieListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishAdvertiseMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimationOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimationIn();
    
};

