#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "PartyRacePresetDetail.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class UTexture2D;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRacePresetDetail : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _PresetIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* _PresetIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* _PresetImageImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _PresetNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* _PresetNameMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _PresetDetailText;
    
public:
    UPartyRacePresetDetail();

    UFUNCTION(BlueprintCallable)
    void SetPreset(int32 PresetIndex, const FText& PresetName, const FText& PresetDetail, const FLinearColor& PresetColor, UTexture2D* ImageTexture);
    
};

