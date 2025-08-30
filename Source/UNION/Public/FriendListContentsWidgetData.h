#pragma once
#include "CoreMinimal.h"
#include "EFriendListCategory.h"
#include "EFriendListType.h"
#include "FriendListContentsWidgetData.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FFriendListContentsWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFriendListType> ListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendListCategory ParentCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EmptyListText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorListText;
    
    FFriendListContentsWidgetData();
};

