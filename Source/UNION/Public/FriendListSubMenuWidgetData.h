#pragma once
#include "CoreMinimal.h"
#include "EFriendListCommandType.h"
#include "FriendListSubMenuWidgetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FFriendListSubMenuWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFriendListCommandType> CommandType;
    
    FFriendListSubMenuWidgetData();
};

