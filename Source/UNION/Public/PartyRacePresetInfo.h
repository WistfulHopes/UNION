#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPartyRacePreset.h"
#include "PartyRacePresetInfo.generated.h"

class UCustomRaceSubOptionPreviewLine;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRacePresetInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRacePreset PresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCustomRaceSubOptionPreviewLine*> PreviewInfoLineArr;
    
    UPartyRacePresetInfo();

};

