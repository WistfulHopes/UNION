#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonStandard.h"
#include "ERaceEndMenuUserReportTypeId.h"
#include "RaceEndMenuUserReportTypeButtonWidget.generated.h"

class UUnionRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URaceEndMenuUserReportTypeButtonWidget : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERaceEndMenuUserReportTypeId, FText> _TitleTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _TitleTextBlock;
    
public:
    URaceEndMenuUserReportTypeButtonWidget();

};

