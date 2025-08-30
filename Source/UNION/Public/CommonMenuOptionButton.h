#pragma once
#include "CoreMinimal.h"
#include "CommonMenuButtonBase.h"
#include "EOptionSequenceMainState.h"
#include "CommonMenuOptionButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuOptionButton : public UCommonMenuButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOptionSequenceMainState OptionButtonType;
    
    UCommonMenuOptionButton();

};

