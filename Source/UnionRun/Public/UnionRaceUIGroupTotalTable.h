#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnionRaceUIGroupTotalTable.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIGroupTotalTable : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GroupResult_Award;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Num_Text_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Num_Text_Loop;
    
    UUnionRaceUIGroupTotalTable();

};

