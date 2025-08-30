#pragma once
#include "CoreMinimal.h"
#include "FriendListResultWidgetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FFriendListResultWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttentionText;
    
    FFriendListResultWidgetData();
};

