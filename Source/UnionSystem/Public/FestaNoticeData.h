#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FestaNoticeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FFestaNoticeData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FestaNoticeBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FestaInfoBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> EventEndBG;
    
    FFestaNoticeData();
};

