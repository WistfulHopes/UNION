#pragma once
#include "CoreMinimal.h"
#include "UnionUIFrameGrabber.h"
#include "UnionUICrossFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUICrossFade : public UUnionUIFrameGrabber {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCrossFadeStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCrossFadeEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossFadeStartDelegate OnCrossFadeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossFadeEndDelegate OnCrossFadeEnd;
    
    UUnionUICrossFade();

    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
};

