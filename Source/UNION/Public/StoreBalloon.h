#pragma once
#include "CoreMinimal.h"
#include "EUIButtonIconType.h"
#include "CommonButtonTextBalloon.h"
#include "StoreBalloon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UStoreBalloon : public UCommonButtonTextBalloon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIButtonIconType ButtonIconType;
    
public:
    UStoreBalloon();

};

