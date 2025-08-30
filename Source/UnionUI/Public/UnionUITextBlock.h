#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "UnionUITextBlock.generated.h"

UCLASS(Blueprintable)
class UNIONUI_API UUnionUITextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseEnFontSize;
    
    UUnionUITextBlock();

    UFUNCTION(BlueprintCallable)
    void UpdateFontSize();
    
};

