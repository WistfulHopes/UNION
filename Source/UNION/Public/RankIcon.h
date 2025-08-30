#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERateRank.h"
#include "RankIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API URankIcon : public UUserWidget {
    GENERATED_BODY()
public:
    URankIcon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRateRank(ERateRank InRateRank);
    
};

