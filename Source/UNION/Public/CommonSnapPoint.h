#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CommonSnapPoint.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonSnapPoint : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapPointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SnapPointImageRef;
    
public:
    UCommonSnapPoint();

    UFUNCTION(BlueprintCallable)
    void SetSnapPointImage(const float InValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitSnapPointImage();
    
    UFUNCTION(BlueprintCallable)
    void NativePreConstruct();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
};

