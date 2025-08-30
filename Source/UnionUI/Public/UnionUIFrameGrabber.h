#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnionUIFrameGrabber.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class UNIONUI_API UUnionUIFrameGrabber : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFrameGrabberCaptureEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFrameGrabberCaptureEndDelegate OnFrameGrabberCaptureEnd;
    
    UUnionUIFrameGrabber();

    UFUNCTION(BlueprintCallable)
    void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);
    
    UFUNCTION(BlueprintCallable)
    void EndCapture();
    
    UFUNCTION(BlueprintCallable)
    bool BeginCapture();
    
};

