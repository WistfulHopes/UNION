#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateTypes.h"
#include "Components/WidgetComponent.h"
#include "UnionWidgetInterface.h"
#include "UnionWidgetTransform.h"
#include "UnionWidgetTextComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIONSYSTEM_API UUnionWidgetTextComponent : public UWidgetComponent, public IUnionWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionWidgetTransform _WidgetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextStyle _Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _IsReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _IsPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> _Justification;
    
public:
    UUnionWidgetTextComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetAppearance(const FEditableTextStyle& Style, bool IsReadOnly, bool IsPassword, float MinDesiredWidth, TEnumAsByte<ETextJustify::Type> Justification);
    

    // Fix for true pure virtual functions not being implemented
};

