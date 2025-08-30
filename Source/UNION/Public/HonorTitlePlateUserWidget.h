#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HonorTitleListData.h"
#include "HonorTitlePlateUserWidget.generated.h"

class UImage;
class UUnionFontScroll;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHonorTitlePlateUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlateImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* HonorTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionFontScroll* HonorTitleTextPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlateIndex;
    
    UHonorTitlePlateUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTextScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTextScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTitlePlate(const FHonorTitleListData SetUpData);
    
};

