#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECustomRaceSettingLine.h"
#include "CustomRaceSubOptionPreviewLine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCustomRaceSubOptionPreviewLine : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomRaceSettingLine SettingLineNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingLineText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SettingContentText;
    
    UCustomRaceSubOptionPreviewLine();

};

