#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "OptionCellTypeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellTypeBase : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
    UOptionCellTypeBase();

};

