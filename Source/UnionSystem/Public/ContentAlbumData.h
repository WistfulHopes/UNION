#pragma once
#include "CoreMinimal.h"
#include "ContentAlbumData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FContentAlbumData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AlbumIds;
    
    FContentAlbumData();
};

